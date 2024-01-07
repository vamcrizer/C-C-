#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i ++ ){
            scaf("%d", &a[i]);
            if (a[i] % 2 ==0){
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
}