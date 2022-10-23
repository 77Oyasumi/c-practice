#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char arr[20] = {};

    scanf("%s", arr);
    getchar();
    
    for(int i = 0; i < 20 - 1; i++){
        for(int j = 0; j < 20 - 1; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i = 0; i < 20; i++){
        printf("%s ", arr[i]);
    }
    puts("");
    return 0;
}