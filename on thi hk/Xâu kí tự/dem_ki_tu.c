#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    char c[200];
    gets(c);
    int digit = 0, alpha = 0, other = 0;
    for (int i = 0; i < strlen(c); i++){
        if (isdigit(c[i])){
            digit++;
        } else if (isalpha(c[i])){
            alpha++;
        } else {
            other++;
        }
    }
    printf("%d %d %d", alpha, digit, other);
}