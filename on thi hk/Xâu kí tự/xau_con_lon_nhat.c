#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int main(){
    char c[100001];
    scanf("%s", c);
    int pos = 0, n = strlen(c);
    while(pos < n){
        char tmp = c[pos];
        int last_pos = pos;
        for (int i = pos; i < n; i++){
            if (c[i] > tmp){
                tmp = c[i];
            }
        }
        for (int i = pos; i < n; i++){
            if (c[i] == tmp){
                printf("%c", c[i]);
                last_pos = i;
            }
        }
        pos = last_pos + 1;
    }
}