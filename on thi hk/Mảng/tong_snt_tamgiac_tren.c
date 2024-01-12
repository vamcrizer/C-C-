 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

int nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

 int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int idx = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = idx; j < n; j++){
            if (nt(a[i][j])){
                sum += a[i][j];
            }
        }
        idx++;
    }
    printf("%d", sum);
 }