#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int checkprime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int checkdigit(int n){
    while (n > 0){
        int digit = n % 10;
        if (!checkprime(digit)){
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int a, b;
    scanf("%d%d", &a, &b);
    int cnt = 0;
    for (int i = a; i <= b; i++){
        if (checkdigit(i) && checkprime(i)){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    }
}