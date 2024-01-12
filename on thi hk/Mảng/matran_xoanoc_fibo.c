 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

ll f[100];

void fib(){
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    fib();
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int x = 0;
    int n;
    scanf("%d", &n);
    int l = 0, r = n - 1, t = 0, b = n - 1;
    ll c[n][n];
    while(l <= r && t <= b){
        for (int i = l; i <= r; i++){
            c[t][i] = f[x++];
        }
        t++;
        for (int i = t; i <= b; i++){
            c[i][r] = f[x++];
        }
        r--;
        for (int i = r; i >= l; i--){
            c[b][i] =f[x++];
        }
        b--;
        for (int i = b; i >= t; i--){
            c[i][l] = f[x++];
        }
        l++;
    }
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
    }
}