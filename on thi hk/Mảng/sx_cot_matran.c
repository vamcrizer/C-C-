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
    int n,m,x;
    scanf("%d%d%d", &n,&m,&x);
    x -= 1;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][x] < a[j][x]){
                int tmp = a[i][x];
                a[i][x] = a[j][x];
                a[j][x] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
}