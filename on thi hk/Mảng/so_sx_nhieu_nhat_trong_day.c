#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a[30000] = {0};
        int n;
        scanf("%d", &n);
        int max = 0;
        int b[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &b[i]);
            a[b[i]]++;
        }
        for (int i = 0; i < n; i++){
            if (a[b[i]] > max){
                max = a[b[i]];
            }
        }
        for (int i = 0; i < n; i++){
            if (a[b[i]] == max){
                printf("%d ", b[i]);
                a[b[i]] = 0;
            }
        }
        printf("\n");
    }
}