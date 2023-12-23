#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int gcd(int a, int b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++){
       res = gcd(res, a[i]);
    }
    printf("%d", res);
}