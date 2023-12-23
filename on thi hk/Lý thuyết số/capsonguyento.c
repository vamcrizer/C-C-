#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int a[1000000];

void sang(){
    a[0] = a[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++){
        for (int j = i * i; j <= 1000000; j += i){
            a[j] = 1;
        }
    }
}

int main(){
    sang();
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++){
        if (!a[i] && !a[n - i]){
            printf("%d %d\n", i, n - i);
        }
    }
}