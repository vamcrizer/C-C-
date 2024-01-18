#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int degree(int n, int k){
    int sum = 0;
    for (int i = k; i <= n; i*=k){
        sum += n / i;
    }
    return sum;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int deg = degree(n, 2);
    if (k <= deg){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}