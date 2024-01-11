#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

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

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[20];
        scanf("%s", c);
        int n = strlen(c);
        int first = c[0] - '0';
        int last = c[n - 1] - '0';
        if (palindrome(c, n) && ((first == 2 * last) || (last == 2 * first))){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}