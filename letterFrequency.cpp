#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    int n,count[27];
    char alph[200];

    while(~scanf("%d", &n)){
        getchar();
        while(n--){
            gets(alph);
            for(int i = 0; i < 27; i++){
                count[i] = 0;
            }
            for(int i = 0; alph[i]; i++){
                if(alph[i] >= 'A' && alph[i] <= 'Z'){
                    count[alph[i] - 'A']++;
                }
                if(alph[i] >= 'a' && alph[i] <= 'z'){
                    count[alph[i] - 'a']++;
                }
            }

            int max = 0;
            for(int i = 0; i < 27; i++){
                if(count[i] > max){
                    max = count[i];
                }
            }
            for(int i = 0; i < 27; i++){
                if(count[i] == max){
                    printf("%c", 'a' + i);
                }
            }
            printf("\n"); 
        }
    }
    return 0;
}