#include <bits/stdc++.h>

using namespace std;

void dutchFlag(int * a, int head, int middle, int tail){
    while(middle <= tail){

        if(a[middle] == 0){
            swap(a[middle], a[head]);
            head++, middle++;
        }

        if(a[middle] == 1){
            middle++;
        }

        if(a[middle] == 2){
            swap(a[middle], a[tail]);
            tail--;
        }
    }
}

int main(){
    int a[10] = {0, 1, 2, 1, 1, 2, 0, 2, 1, 0};
    int num = 10;

    for(int i = 0; i<num; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;

    int head = 0;
    int middle = 0;
    int tail = num - 1;

    dutchFlag(a, head, middle, tail);

    for(int j = 0; j<num; j++){
        cout<<a[j]<<' ';
    }
     
    return 0;
}