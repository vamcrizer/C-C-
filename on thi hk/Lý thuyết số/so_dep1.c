#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

ll fibo[94];

int palindrome(char a[], int n){
    int l = 1, r = n - 2;
    while(l < r){
        if (a[l] != a[r]){
            return 0;
        }
        ++l, --r;
    }
    return 1;
}

void fib(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int checkprime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int sum_of_digit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int checksumfib(int n){
    ll sum = sum_of_digit(n);
    for (int i = 0; i <= 92; i++){
            if (sum == fibo[i]){
                return 1;
            }
        }
        return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        
    }
}