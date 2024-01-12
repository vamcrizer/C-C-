 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int a[100000];

void sang(){
    a[0] = a[1] = 1;
    for (int i = 2; i <= sqrt(100000); i++){
        for (int j = i * i; j <= 100000; j += i){
            a[j] = 1;
        }
    }
}
void solve(int *x){
    while(a[(*x)] != 0){
        (*x)++;
    }
}

int main(){
    sang();
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
    int x = 2;
    int n;
    scanf("%d", &n);
    int l = 0, r = n - 1, t = 0, b = n - 1;
 
    int c[n][n];
    while(l <= r && t <= b){
        for (int i = l; i <= r; i++){
            solve(&x);
            c[t][i] =x++;
        }
        t++;
        for (int i = t; i <= b; i++){
            solve(&x);
            c[i][r] = x++;
        }
        r--;
        for (int i = r; i >= l; i--){
            solve(&x);
            c[b][i] =x++;
        }
        b--;
        for (int i = b; i >= t; i--){
            solve(&x);
            c[i][l] = x++;
        }
        l++;
    }
    printf("Test %d:\n", i);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    }
}