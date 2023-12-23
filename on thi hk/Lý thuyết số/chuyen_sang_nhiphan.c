#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("%d", 0);
        return 0;
    }
    int cnt = 0;
    int p[10000];
    while(n != 0){
        if (n % 2 == 0){
            p[cnt++] = 0;
        } else {
            p[cnt++] = 1;
        }
        n/=2;
    }
    for (int i = cnt - 1; i >= 0; i--){
        printf("%d", p[i]);
    }
}