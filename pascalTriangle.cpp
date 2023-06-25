#include <stdio.h>
#define HEIGHT 12

int combi(int r, int n){
    int p = 1;
    int i;
    for(i = 1; i <= n; i++) {
        p = p * (r - i + 1) / i;
    }
    return p;
}

int main() {
    int r;
    for(r = 0; r < HEIGHT; r++) {
        int numSpaces = (HEIGHT - r) * 3;
        int n;
        for(n = 0; n < numSpaces; n++) {
            printf(" ");
        }
        for(n = 0; n <= r; n++) {
            printf("%6d", combi(r, n));
        }
        printf("\n");
    }
    return 0;
}
