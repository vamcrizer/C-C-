#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;
int p[1000000];
int a[1000000];


int sum_of_digit(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    int sum = sum_of_digit(n);
    if (sum % 10 == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}