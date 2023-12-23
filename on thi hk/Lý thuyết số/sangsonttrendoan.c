#include <stdio.h>
#include <math.h>
typedef long long ll;

void sang2(int l, int r){
    int a[r - l + 1];
    for (int i = 0; i <= r - l; i++){
        a[i] = 1;
    }
    for (int i = 2; i <= sqrt(r); i++){
        for (int j = fmax(i * i, (l + i - 1) / i * i); j <= r; j += i){
            a[j - l] = 0;
            }
    }
    for (int i = fmax(2, l); i <= r; i++){
        if (a[i - l]){
            printf("%d ", i);
        }
    }
}

int main(){
    sang2(10,100);
}