#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}