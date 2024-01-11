#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    char c[101];
    gets(c);
    char a[50][50];
    int cnt = 0;
    char *tok = strtok(c, " ");
    while(tok != NULL){
        strcpy(a[cnt++], tok);
        tok = strtok(NULL, " ");
    }
    for (int i = 0; i < cnt; i++){
        for (int j = i + 1; j < cnt; j++){
            if (strcmp(a[i], a[j]) == 0){
                a[j][0] = '\0';
            }
        }
    }
    for (int i = 0; i < cnt; i++){
        if (a[i][0] != '\0'){
            printf("%s ", a[i]);
        }
    }
}