#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char name[3] = {0};
    int grade[3][4] = {0};
    int i, j;
    for(i = 0; i < 3; i++){
        scanf("%c", &name[i]);
        for(j = 0; j < 3; j++){
            scanf("%d", &grade[i][j]);
            getchar();
            grade[i][3] += grade[i][j]; 
        }
        
    }

    for(i = 0; i < 3; i++){
        printf("%c:", name[i]);
        grade[i][3] /= 3;
        for(j = 0; j < 4; j++){
            printf("%d ", grade[i][j]);
        }
        puts("");
    }
    return 0;
}