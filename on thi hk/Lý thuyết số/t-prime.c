#include <stdio.h>
#include <math.h>
typedef long long ll;



int main(){
    int n;
    scanf("%d", &n);
    int a[n+100][n+100];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int b[2*n+100][2*n+100];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            b[i-j+n][i+j] = a[i][j];
        }
    }
    for (int i = 2; i <= 2*n; i++){
        for (int j = 2*n-1; j >= 1; j--){
            if (b[j][i] == 0){
                printf(" ");
            } else {
            printf("%d", b[j][i]);
            }
        }
        printf("\n");
    }
}