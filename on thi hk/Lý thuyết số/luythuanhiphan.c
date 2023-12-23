#include <stdio.h>
typedef long long ll;

ll binpow(ll a, ll b){
    if (b == 0){
        return 1;
    }
    ll x = binpow(a, b / 2);
    if (x % 2 == 1){
        return x * x * a;
    } else {
        return x * x;
    }
}

ll binpow2(ll a, ll b){
    ll res = 1;
    while(b){
        if (a & 1){
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res
}

int main(){

}