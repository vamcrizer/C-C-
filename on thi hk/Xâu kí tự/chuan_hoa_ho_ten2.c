#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

void to_lower(char a[]){
    a[0] = toupper(a[0]);
    for (int i = 1; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
}
void to_upper(char a[]){
    for (int i = 0; i < strlen(a); i++){
        a[i] = toupper(a[i]);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[100];
        scanf(" %[^\n]", c);
        char a[100][100];
        char *tok = strtok(c, " ");
        int cnt = 0;
        while (tok != NULL){
            strcpy(a[cnt++], tok);
            tok = strtok(NULL, " ");
        }
    for (int i = 1; i < cnt; i++){
        to_lower(a[i]);
        printf("%s", a[i]);
        if (i < cnt - 1){
            printf(" ");
        }
    }
    to_upper(a[0]);
    printf(", %s", a[0]);
    printf("\n");
    }
}