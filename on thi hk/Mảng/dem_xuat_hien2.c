#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int a[1000];

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
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        if (a[b[i]]){
            printf("%d xuat hien %d lan\n", b[i], a[b[i]]);
            a[b[i]] = 0;
        }
    }
    }
}