#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s){
    if(s.length() == 0){
        return true;
    }

    for(int i = 0; i <= s.length() / 2; i++){
        if(s[i] != s[s.length() - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    string input;
    while(getline(cin, input) && input != "DONE"){
        string transfer;
        for(int i = 0; i < input.length(); i++){
            if(isalpha(input[i])){
                transfer += tolower(input[i]);
            }
        }

        if(isPalindrome(transfer)){
            printf("You won't be eaten !\n");
        }else{
            printf("Oh, No...\n");
        }
    }

    return 0;
}