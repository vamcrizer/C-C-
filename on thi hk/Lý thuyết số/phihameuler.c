#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;
int phi[1000001];
void sangeuler(){
    for (int i = 1; i <= 1000000; i++){
        phi[i] = i;
    }
    for (int i = 2; i <= 1000000; i++){
        if (phi[i] == i){
            phi[i] = i - 1;
            for (int j = i * 2; j <= 1000000; j += i){
                phi[j] = phi[j] - phi[j] / i 
            }
        }
    }
}
ll eulerphi(ll n){
    ll res = n - 1;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            res -= res / i;
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

int main(){
    printf("%d", eulerphi(120));
}