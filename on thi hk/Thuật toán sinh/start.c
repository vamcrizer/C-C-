#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
typedef long long ll;

//Sinh nhi phan
//Sinh to hop
//Sinh phan hoach
//Sinh hoan vi

int n, X[100], ok = 1;
bool kiemtra(){
    for (int i = 1; i <= n; i++){
        if (X[i] == 0){
            return false;
        }
    }
    return true;
}

void init(){
    for (int i = 1; i <= n; i++){
        X[i] = 0;
    }
}

void sinh2(){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        --i;
    }
    if (i==0){
        ok = 0;
    }
    X[i] = 1;
}

int main(){
    init();
    scanf("%d", &n);
    while(ok){
        for (int i = 1; i <= n; i++){
            printf("%d ", X[i]);
        }
        printf("\n");
        sinh2();
    }
    return 0;
}