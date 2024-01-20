#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int a[2*n - 1];
    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1;i++){
        a[n + i] = a[i];
    }
    ll sum1 = 0, sum2 = 1e9;
    for (int i = 0; i < 2*n -1 ;i++){
        sum1 += a[i];
        sum2 = fmin(sum1, sum2);
        if (sum1 )
    }
    printf("%d", sum2);
}