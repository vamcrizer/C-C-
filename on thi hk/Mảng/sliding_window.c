 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
typedef long long ll;

int main(){
    int n, k;
    scanf("%d%d", &n,&k);
    int a[n];
    for (int i = 0;i < n; i++){
        scanf("%d", &a[i]);
    }
    ll sum = 0, res = (int)-1e18, idx;
    for (int i = 0;i < k; i++){
        sum += a[i];
    }
    res = sum;
    for (int i = 1;i <= n - k; i++){
        sum = sum - a[i - 1] + a[i - 1 + k];
        if (sum >= res){
            res = sum;
            idx = i;
        }
    }
    for (int i = 0;i < k; i++){
        printf("%d ", a[idx + i]);
    }
}