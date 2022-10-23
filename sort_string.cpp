#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char arr[20];

    printf("Enter an array of characters: ");
    scanf("%s", arr);                           /* Input your text into an array, not character by character */

    for(unsigned int i = 0; i < (strlen(arr) - 1); i++){
        for(unsigned int j = 0; j < (strlen(arr) - i) - 1; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(unsigned int i = 0; i < strlen(arr); i++){
        printf("%c", arr[i]);               /* Use %c for printing a character */
    }
    printf("\n");

    return 0;
}