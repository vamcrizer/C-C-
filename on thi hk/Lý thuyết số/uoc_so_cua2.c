#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    scanf("%d", &t);
    while(t--){
        int n;  
        scanf("%d", &n);
        int cnt = 0;
        for (int i = 1; i * i <= n; i++){
            if (n % i == 0){
                if (i % 2 == 0){
                    cnt++;
                }
                if ((n / i) % 2 == 0){
                    cnt++;
                }
                if (i * i == n && i % 2 == 0){
                    cnt--;
                }
            }
        }
        printf("%d\n", cnt);
    }
}