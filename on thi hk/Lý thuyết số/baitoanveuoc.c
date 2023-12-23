#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int tinh_so_uoc(int n){
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (n / i != i){
                sum += 2;
            } else {
                sum += 1;
            }
        }
    }
    return sum;
}

int tinh_so_uoc2(int n){
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++){
        int count = 0;
        while (n % i == 0){
            count++;
            n /= i;
        }
        res *= (count + 1);
    }
    if (n != 1){
        res *= 2;
    }
    return res;
}
int tinh_tong_uoc(int n){
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (n / i != i){
                sum += i + n / i;
            } else {
                sum += i;
            }
        }
    }
    return sum;
}

int tich_cac_uoc(int n){
    int sum = tinh_so_uoc2(n);
    return (int)pow(n, sum/2);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tich_cac_uoc(12));
}