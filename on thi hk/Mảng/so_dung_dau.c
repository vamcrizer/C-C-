#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int cnt = 0;
        int b[n];
        for (int i = 0; i < n; i++){
            int ok = 1;
            for (int j = i + 1; j < n; j++){
                if (a[i] <= a[j]){
                    ok = 0;
                    break;
                }
            }
            if (ok){
                b[cnt] = a[i];
                cnt++;
            }
        }
        qsort(b, cnt, sizeof(int), cmp);
        for (int i = 0; i < cnt; i++){
            printf("%d ", b[i]);
        }
        printf("\n");
    }
}