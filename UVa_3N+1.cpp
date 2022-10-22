#include<bits/stdc++.h>

using namespace std;

int length(int num){
    int leng = 1;
    while(num != 1){
        if(num % 2 == 1){
            num = 3 * num + 1;
        }else{
            num = num / 2;
        }leng++;
    }
    return leng;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        int maxlength = 0;
        cout<<a<<" "<<b<<" ";
        for(int i = min(a,b); i <= max(a,b); i++){
            maxlength = max(length(i), maxlength);
        }
        cout<<maxlength;
    }
    return 0;
}