#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
typedef long long ll;

int main(){
     int t;
     scanf("%d", &t);
     while(t--){
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m + 1][n + 1];
    int b[m + 1][n + 1];;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1){
                int row = i;
                int col = j;
                for (int k = 0; k < n; k++){
                    b[row][k] = 1;
                }
                for (int k = 0; k < m; k++){
                    b[k][col] = 1;
                }

            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
     }
}