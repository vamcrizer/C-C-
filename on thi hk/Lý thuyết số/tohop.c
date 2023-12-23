#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

// Multinomial coefficient :
// n!/m1!m2!..mk!

ll nPk (ll k, ll n){
    ll res = 1;
    for (int i = 0; i < k; i++){
        res *= (n - i);
    }
    return res;
}
int main(){
    printf("%lld", nPk(3, 100));
}