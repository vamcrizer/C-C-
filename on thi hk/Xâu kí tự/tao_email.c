#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

void to_lower(char a[]){
    for (int i = 0; i < strlen(a); i++){
        if(a[i] > 'A' && a[i] < 'Z'){
            a[i] += 32;
        }
    }
}

int main(){
    char a[101][1001];
    char c[100];
    gets(c);
    to_lower(c);
    int cnt = 0;
    char *tok = strtok(c, " ");
    while(tok != NULL){
        strcpy(a[cnt++], tok);
        tok = strtok(NULL, " ");
    }
    
    for (int i = 0; i < cnt - 1; i++){
        printf("%c", a[i][0]);
    }
    printf("%s", a[cnt-1]);
    printf("@ptit.edu.vn");
}