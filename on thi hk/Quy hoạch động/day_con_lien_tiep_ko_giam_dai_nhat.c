#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ;i < n; i++){
        scanf("%d", &a[i]);
    }
    int step = 1, res = 0;
    for (int i = 1;i < n; i++){
        if (a[i] >= a[i - 1]){
            step++;
        } else {
            step = 1;
        }
        if (step > res){
            res = step;
        }
    }
    printf("%d", res);
}