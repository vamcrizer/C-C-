#include <stdio.h>
#include <math.h>
typedef long long ll;

ll nCk(ll k, ll n){
    ll res = 1;
    ll k = fmin(k, n - k);
    for (int i = 0; i < k; i++){
        res *= (n - i)/(i + 1);
    }
    return res;
}

ll nPk (ll k, ll n){
    ll res = 1;
    for (int i = 0; i < k; i++){
        res *= (n - i);
    }
    return res;
}