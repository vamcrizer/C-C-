#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
    char c[200];
    scanf(" %[^\n]", c);
    int a[256] = {0};
    for (int i = 0; i < strlen(c); i++){
        a[c[i]]++;
    }
    for (int i = 0; i < strlen(c); i++){
        if (a[c[i]]){
            printf("%c%d", c[i], a[c[i]]);
            a[c[i]] = 0;
        }
    }
    printf("\n");
    }
}