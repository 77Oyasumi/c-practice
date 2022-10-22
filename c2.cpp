#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    for(int a = 2; a <= 100; a++){
        int fg = 1;
        for(int b = 2; b <= sqrt(a); b++){
            if(a % b == 0){
            fg = 0;
            break;
            }
        }
        if(fg){
            printf("%d\n", a);
        }   
    }
    return 0;     
}