#include <iostream>
#include <string>

using namespace std;

string rev(string a){
    string stringout = "";
    for(int i = a.length() - 1; i >= 0; i--){
        stringout = stringout + a[i];
    }
    return stringout;
}

int main(){
    string a;
    while(cin>>a){

        cout<<rev(a)<<endl;

        if(a == rev(a)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}