#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;
int p[1000001];
void sang3(){
    for (int i = 1; i <= 1000000; i++){
        p[i] = i;
    }
    for (int i = 2; i <= sqrt(1000000); i++){
        if (p[i] == i){
            for (int j = i * i; j <= 1000000; j += i){
                if (p[j] == j){
                    p[j] = i;
                }
            }
        }
    }
}
int main(){
    sang3();
    int n;
    scanf("%d", &n);
    while(n != 1){
        printf("%d ", p[n]);
        n /= p[n];
    }
}