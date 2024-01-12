 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int m,n,p,q;
    scanf("%d%d%d%d", &m, &n, &p, &q);
    int a[m][n];
    int b[n][p];
    int c[p][q];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < p; i++){
         for (int j = 0; j < q; j++){
             scanf("%d", &c[i][j]);
         }
    }
    int ab[m][p];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            int sum = 0;
            for (int k = 0; k < n; k++){
                sum += a[i][k] * b[k][j];
                ab[i][j] = sum;
            }
            ab[i][j] = sum;
        }
    }
    int res[m][q];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++){
            int sum = 0;
            for (int k = 0; k < p; k++){
                sum += ab[i][k] * c[k][j];
                res[i][j] = sum;
            }
            res[i][j] = sum;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++){
            printf("%d ", res[i][j]);
    }
    printf("\n");
    }
}