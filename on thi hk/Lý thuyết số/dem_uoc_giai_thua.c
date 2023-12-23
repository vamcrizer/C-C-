#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int checkprime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int degree(int n, int p){
    int res = 0;
    for (int i = p; i <= n; i *= p){
        res += n / i;
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        ll ans = 1;
        for (int i = 1; i <= n; i++){
            if (checkprime(i)){
                int d = degree(n, i);
                ans *= (d + 1);
            }
        }
        printf("%lld\n", ans);
    }
}