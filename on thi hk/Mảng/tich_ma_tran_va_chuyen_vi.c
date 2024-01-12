 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int m,n;
    scanf("%d%d", &m, &n);
    int a[m][n], b[n][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    printf("Test %d:\n", i);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            int sum = 0;
            for (int k = 0; k < n; k++){
                sum += a[i][k] * b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    printf("\n");
    }
 }