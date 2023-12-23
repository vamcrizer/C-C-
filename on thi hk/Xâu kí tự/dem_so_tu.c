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
    char c[201];
    scanf(" %[^\n]", c);
    char *tok = strtok(c, " ");
    int cnt = 0;
    while(tok != NULL){
        cnt++;
        tok = strtok(NULL, " ");
    }
    printf("%d\n", cnt);
    }
}