#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    char c[100][100];
    int i = 0, j;
    char a;
    while(1){    
        scanf("%s%c", c[i], &a);
        if(a == '\n'){
            break;
        }
        i++;    
    }

    for(j = i; j >= 0; j--){
        printf("%s ", c[j]);
    }
    return 0;
}