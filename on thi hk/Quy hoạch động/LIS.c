#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int n;
    scanf("%d", &n);
    int l[n];
    int a[n];
    for (int i = 0; i < n; i++){
        l[i] = 1;
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (a[i] > a[j]){
                l[i] = fmax(l[i], l[j] + 1);
            }
        }
    }
    qsort(l, n, sizeof(int), cmp);
    printf("%d", l[n - 1]);
}