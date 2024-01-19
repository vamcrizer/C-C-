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
    int n;
    scanf("%d", &n);
    ll a[n];
    for (int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    ll sum1 = 0, sum2 = (int)-1e18;
    for (int i = 0; i < n; i++){
        sum1 += a[i];
        sum2 = fmax(sum1,sum2);
        if (sum1 < 0){
            sum1 = 0;
        }
    }
    printf("%lld\n", sum2);
    }
 }