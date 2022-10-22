#include <iostream>
#include <vector>

using namespace std;

void swap(int &p1, int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void MaxHeapify(vector<int> &array, int root, int length){
    int left = 2 * root;
    int right = 2 * root + 1;
    int largest;
    
    if(left <= length && array[left] > array[root]){
        largest = left;
    }else{
        largest = root;
    }
    if(right <= length && array[right] > array[largest]){
        largest = right;
    }

    if(largest != root){
        swap(array[largest], array[root]);
        MaxHeapify(array, largest, length);
    }
}

void BuildMaxHeap(vector<int> &array){
    for(int i = (int)array.size()/2; i >= 1; i--){
        MaxHeapify(array, i, (int)array.size() - 1);
    }
}

void HeapSort(vector<int> &array){
    array.insert(array.begin(), 0); //將index(0)閒置

    BuildMaxHeap(array);

    int size = array.size() - 1;
    for(int i = (int)array.size() - 1; i >= 2; i--){
        swap(array[1], array[i]);
        size--;
        MaxHeapify(array, 1, size);
    }
    array.erase(array.begin());
}

void PrintArray(vector<int> &array){
    for(int i = 0; i < array.size(); i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {9, 4, 1, 6, 7, 3, 8, 2, 5};
    vector<int> array(arr, arr+sizeof(arr)/sizeof(int));

    printf("original:\n");
    PrintArray(array);

    HeapSort(array);

    printf("sorted:\n");
    PrintArray(array);
    
    return 0;
}