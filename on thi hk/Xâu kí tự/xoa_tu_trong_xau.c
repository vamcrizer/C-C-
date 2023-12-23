#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lower(char a[]){
    for (int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        char c[201];
        char s[201];
        scanf(" %[^\n]", c);
        getchar();
        scanf(" %[^\n]", s);
        to_lower(s);
        char *tok = strtok(c, " ");
        printf("Test %d: ", i);
        while(tok != NULL){
            char tmp[201];
            strcpy(tmp, tok);
            to_lower(tmp);
            if (strcmp(s, tmp)){
                printf("%s ", tok);
            }
            tok = strtok(NULL, " ");
        }
        
        printf("\n");
    }
    return 0;
}
