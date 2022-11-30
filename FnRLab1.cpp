#include <iostream>

using namespace std;

int theRoot(int a, int b, int c);

int main(){
    int a, b, c;
    while(~scanf("%d %d %d", &a, &b, &c)){
        printf("%d\n", theRoot(a, b, c));
    }
    return 0;
}

int theRoot(int a, int b, int c){
    int root = b * b - 4 * a * c;
    if(root < 0){
        return 0;
    }else if (root == 0){
        return 1;
    }else{
        return 2;
    }
}