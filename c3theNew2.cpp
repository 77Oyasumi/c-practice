#include <stdio.h>

int main(){
 char arr[20];
 scanf("%s", arr);

 for(int i = 0; i < 20; i++){
    for(int j = 0; j < 20 - i - 1; j++){
        if(arr[j] > arr[j+1]){
            int tmp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = tmp;
        }
    }
 }

 for(int i = 0; i < 20; i++){
    printf("%c", arr[i]);
 }
 return 0;
}