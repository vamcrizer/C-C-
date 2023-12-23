#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int x, y, g;
void extended_gcd(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        g = a;
    } else {
        extended_gcd(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

int main(){
    extended_gcd(16, 10);
    printf("%d %d %d", x, y, g);
}