#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int a[1000];

int isprime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        a[b[i]]++;
    }
    qsort(b, n, sizeof(int), cmp);
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        if (a[b[i]] && isprime(b[i])){
            printf("%d xuat hien %d lan\n", b[i], a[b[i]]);
            a[b[i]] = 0;
        }
    }
    }
}