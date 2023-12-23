#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 10000000
typedef long long ll;
int a[size] = {0};
// sàng số nguyên tố
void sang(){
    a[0] = a[1] = 1;
    for (int i = 2; i <= sqrt(size); i++){
        for (int j = i * i; j <= size; j += i){
            a[j] = 1;
        }
    }
}
// sàng số nguyên tố trên đoạn
void sang2(int l, int r){
    int size = r - l + 1;
    int b[size];
    for (int i = 2; i <= sqrt(size); i++){
        for (int j = fmax(i * i,(l + i - 1) /i * i); j <= n; j += i){
            b[j - l] = 0;
        }
    }
    for (int i = fmax(2, l); i <= r; i++){
        if (b[i - l]){
            printf("%d ", i);
        }
    }
}
// sàng số nguyên tố nhỏ nhất
void sang3(){
    int p[1000001];
    for (int i = 1; i <= 1000000; i++){
        p[i] = i;
    }
    for (int i = 2; i <= sqrt(1000000); i++){
        if (p[i] == i){
            for (int j = i * i; j <= 1000000; j += i){
                if (p[j] == j){
                    p[j] = i;
                }
            }
        }
    }
}
int main(){
    sang();
    for (int i = 2; i <= 1000; i++){
        if (!a[i]){
            printf("%d ", i);
        }
    }
}