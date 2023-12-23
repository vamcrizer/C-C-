#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    char c[201];
    char s[201];
    scanf(" %[^\n]", &c);
    getchar();
    scanf(" %[^\n]", &s);
    char *tok = strtok(c, " ");
    while(tok != NULL){
        if (strcmp(tok, s)){
            printf("%s ", tok);
        }
        tok = strtok(NULL, " ");
    }
}