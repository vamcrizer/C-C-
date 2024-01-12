 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int n, m;
    scanf("%d%d", &n, &m);
    int l = 0, r = m - 1, t = 0, b = n - 1;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    while(l <= r || t <= b){
        for (int i = l; i <= r; i++){
            printf("%d ", a[t][i]);
        }
        t++;
        if (t > b){
            break;
        }
        for (int i = t; i <= b; i++){
            printf("%d ", a[i][r]);
        }
        r--;
        if (l > r){
            break;
        }
        for (int i = r; i >= l; i--){
            printf("%d ", a[b][i]);
        }
        if (t > b){
            break;
        }
        b--;
        for (int i = b; i >= t; i--){
            printf("%d ", a[i][l]);
        }
        if (t > b){
            break;
        }
        l++;
    }
    printf("\n");
    }
}