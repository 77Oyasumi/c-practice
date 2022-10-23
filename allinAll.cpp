#include <iostream>
#include <string>

using namespace std;

bool isIn(string substr, string str){
    int length = 0;

    for(int i = 0; i < str.size(); i++){
        if(substr[length] == str[i]){
            length++;
        }
    }
    if(length == substr.size()){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    string s, t;
    while(cin>>s>>t){
        if(isIn(s, t)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}