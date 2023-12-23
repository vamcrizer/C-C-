#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int degree(ll n, ll k){
    int ans = 0;
    for (int i = k; i <= n; i++){
        int m = i;
        while (m % k == 0){
            ans++;
            m /= k;
        }
    }
    return ans;
}

int legendre(ll n; ll k){
    int ans = 0;
    for (int i = k; i <= n; i *= k){
        ans += n / i;
    }
    return ans;
}