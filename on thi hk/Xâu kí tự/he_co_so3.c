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
    char c[20];
    scanf(" %[^\n]", c);
    int ok = 1;
    for (int i = 0; i < strlen(c); i++){
        if (c[i] != '0' && c[i] != '1' && c[i] != '2'){
            ok = 0;
            break;
        }
    }
    if(ok){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}