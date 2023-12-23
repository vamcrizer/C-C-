#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
typedef long long ll;

bool check(char c[]){
    int l = 0, r = strlen(c) - 1;
    int cnt = 0;
    while(l < r){
        if (c[l] != c[r]){
            cnt++;
        }
        ++l, --r;
    }
    if (strlen(c) % 2 == 0 && cnt == 0){
        return false;
    } else if (cnt >= 2){
        return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    char c[100001];
    scanf(" %[^\n]", c);

    if (check(c)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}