#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int a[1000];

int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        a[b[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (a[b[i]]){
            printf("%d ", b[i]);
            a[b[i]] = 0;
        }
    }
}