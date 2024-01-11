#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if (strcmp(x,y) < 0){
        return -1;
    } else {
        return 1;
    }
}

int main(){
    char c[501];
    gets(c);
    char *tok = strtok(c, " ");
    int cnt = 0;
    char a[101][101];
    while (tok != NULL){
        strcpy(a[cnt++], tok);
        tok = strtok(NULL, " ");
    }
    qsort(a, cnt, sizeof(a[0]), cmp);
    for (int i = 0; i < cnt; i++){
        printf("%s ", a[i]);
    }
}