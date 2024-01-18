 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int a[n][3];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int zero = 0;
        int one = 0;
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1){
                one++;
            } else {
                zero++;
            }
        }
        if (one > zero){
            cnt++;
        }
    }
    printf("%d\n", cnt);
}