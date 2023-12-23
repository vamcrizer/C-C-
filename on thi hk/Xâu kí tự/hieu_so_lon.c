#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

void reverse(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
}

void add(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1];
    for (int i = 0; i < n1; i++){
        x[i] = a[i] - '0';
    }
    for (int i = 0; i < n2; i++){
        y[i] = b[i] - '0';
    }
    reverse(x, n1);
    reverse(y, n2);
    for (int i = n2; i < n1; i++){
        y[i] = 0;
    }
    int nho = 0;
    for (int i = 0; i < n1; i++){
        int tmp = x[i] - y[i] - nho;
        if (tmp < 0){
            nho = 1;
            z[n++] = 10 + tmp;
        } else {
            z[n++] = tmp;
            nho = 0;
        }
    }
    int ok = 0;
    for (int i = n - 1; i >= 0; i--){
        if (ok == 0 && z[i] != 0){
            ok = 1;
        }
        if (ok){
            printf("%d", z[i]);
        }
    }
    if (!ok){
        printf("%d", 0);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[1001], b[1001];
        scanf("%s%s", &a, &b);
        if (strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a, b) > 0)){
            add(a,b);
        } else {
            add(b,a);
        }   
        printf("\n");
    }
}