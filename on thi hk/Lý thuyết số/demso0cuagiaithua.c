#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int legendre(ll n, ll k){
    int ans = 0;
    for (int i = k; i <= n; i *= k){
        ans += n / i;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", legendre(n , 5));
}