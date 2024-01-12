 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int n;
    scanf("%d", &n);
    int l = 0, r = n - 1, t = 0, b = n - 1;
    int x = n*n;
    int a[n][n];
    while(x >= n / n){
        for (int i = l; i <= r; i++){
            a[t][i] = x--;
        }
        t++;
        for (int i = t; i <= b; i++){
            a[i][r] = x--;
        }
        r--;
        for (int i = r; i >= l; i--){
            a[b][i] = x--;
        }
        b--;
        for (int i = b; i >= t; i--){
            a[i][l] = x--;
        }
        l++;
    }
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
}