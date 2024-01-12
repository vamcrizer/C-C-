 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>


int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++){
        int x = 1;
        for (int j = 0; j < n; j++){
            if (j <= i){
                a[i][j] = x++;
            } else {
                a[i][j] = 0;
            }
            b[j][i] = a[i][j];
        }
    }
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
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