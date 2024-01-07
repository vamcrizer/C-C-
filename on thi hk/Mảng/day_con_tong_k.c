#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int s;
    scanf("%d", &s);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int dp[s + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = s; j >= a[i]; j--){
            if (dp[j - a[i]]){
                dp[j] = 1;
            }
        }
    }
    if (dp[s]){
        printf("1");
    } else {
        printf("0");
    }
}