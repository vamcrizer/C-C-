#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    char c[100000];
    scanf("% [^\n]", c);
    printf("%d\n", strlen(c) - 1);
}