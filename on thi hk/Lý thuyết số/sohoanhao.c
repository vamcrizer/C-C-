#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;
// 2^(p-1) * 2^p - 1 -> hoàn hảo
int primecheck(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}
ll hoanhao[10];
int cnt = 0;
int main(){
    ll n;
    scanf("%lld", &n);
    for (int p = 2; p <= 32; p++){
        if (primecheck(p)){
            int temp = (int)pow(2, p) - 1;
            if (primecheck(temp)){
                hoanhao[cnt] = 1ll* (int)pow(2, p - 1) * temp;
                cnt++;
            }
        }
    }
    
    for (int i = 0; i < cnt; i++){
        if (hoanhao[i] == n){
            printf("1\n");
            return 0;
        }
    }
    printf("0");
}