#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

void chinhphuong(int l, int r){
    int c1 = sqrt(l);
    int c2 = sqrt(r);
    if (c1 * c1 != l){
        c1++;
    }
    for (int i = c1; i <= c2; i++){
        printf("%d ", i * i);
    }
}

int main(){
    int l, r;
    chinhphuong(1,100);
}