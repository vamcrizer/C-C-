#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
typedef long long ll;

bool checkprime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}

ll hh[10];
int cnt = 0;
void hoanhao(){
    for (int i = 2; i <= 32; i++){
        if (checkprime(i)){
            int tmp = (int)pow(2, i) - 1;
            if (checkprime(tmp)){
                hh[cnt] = 1ll * (int)pow(2, i - 1) * tmp;
                cnt++;
            }
        }
    }
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    hoanhao();
    for (int i = 0; i < cnt; i++){
        if (m > n){
        if (hh[i] >= n && hh[i] <= m){
            printf("%lld ", hh[i]);
        }
        } else {
            if (hh[i] >= m && hh[i] <= n){
            printf("%lld ", hh[i]);
        }
        }
    }
}