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
    scanf("%d%d", &m ,&n);
    int a[m][n];
    int sum_max = 0;
    int max;
    for (int i = 0; i < m; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        if (sum > sum_max){
            sum_max = sum;
            max = i;
            }
        }
    int col_max;
    int col_sum_max = 0;
    for (int j = 0; j < n; j++){
        int sum = 0;
        for (int i = 0; i < m; i++){
            if (i != max){
                sum += a[i][j];
            }
        }
         if (sum > col_sum_max){
            col_sum_max = sum;
             col_max = j;
             }
            }
    printf("Test %d:\n", i);
     for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
             if (i != max && j != col_max){
                 printf("%d ", a[i][j]);
             }
         }
         printf("\n");
     }
    }
    }