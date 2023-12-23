#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

ll fibo[100];
void fibon(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int main(){
    fibon();
    ll n;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++){
        printf("%lld ", fibo[i]);
    }

}
