#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void in(int a[], int n){
    for (int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++){
        int ok = 0;
        for (int j = i + 1; j <= n; j++){
            if (a[i] > a[j]){
                ok = 1;
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        if (ok){
        printf("Buoc %d: ", i);
        in(a, n);
        printf("\n");
        }
        
    }
}