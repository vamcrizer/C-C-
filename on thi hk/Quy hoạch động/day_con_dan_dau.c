#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0, ok = 0, res = 0;
    for (int i = 0; i < n; i++){
        if (a[i] * a[i + 1] < 0){
            cnt++;
            ok = 1;
        } else {
            cnt = 0;
        }
        if (ok == 1 && cnt > res){
            res = cnt;
        }
    }
    if (ok == 1){
        printf("%d", res + 1);
    } else {
        printf("-1");
    }
}