#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int checkpalindrome(char a[], int n){
    int l = 0, r = n - 1;
    while(l<r){
        if (a[l] != a[r]){
            return 0; 
        }
         ++l, --r;
    }
    return 1;
}

int checkeven(char c[], int n){
    for (int i = 0; i < n; i++){
        int digit = c[i] - '0';
        if (digit % 2 != 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    char c[501];
    scanf("%s", c);
    if (checkeven(c, strlen(c)) && checkpalindrome(c, strlen(c))){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}