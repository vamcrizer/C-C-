#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
typedef long long ll;

int X[100], n;
int ok = 1;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(int a, int b){
    while(a < b){
        swap(&X[a], &X[b]);
        ++a;
        --b;
    }

}

void init(){
    for (int i = 1; i <= n; i++){
        X[i] = i;
    }
}

void sinh2(){
    int i = n - 1;
    while(X[i] > X[i + 1] && i >= 1){
        --i;
    }
    if (i == 0){
        ok = 0;
    } else {
        int j = n;
        while(X[i] > X[j]){
            --j;
        }
        swap(&X[i], &X[j]);
        reverse(i + 1, n);
    }
}
int main(){
    scanf("%d", &n);
    init();
    while(ok){
    for (int i = 1; i <= n; i++){
        printf("%d ", X[i]);
    }
        printf("\n");
        sinh2();
    }
}