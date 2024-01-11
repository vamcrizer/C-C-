#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int cmp(const void *a, const void *b){
    return *(char*)a - *(char*)b;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    char c[20];
    scanf("%s", c);
    int length = strlen(c);
    qsort(c, length, sizeof(char), cmp);
    for (int i = 0; i < length; i++){
        if (c[i] != '0'){
            printf("%c", c[i]);
        }
    }
    printf("\n");
    }
}