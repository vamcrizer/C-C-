#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int dec, base;
    scanf("%d%d", &dec, &base);
    char remstack[1000];
    int idx = -1;
    while(dec > 0){
        int rem = dec % base;
        if (rem >= 10){
            remstack[++idx] = (rem - 10) + 'A';
        } else {
             remstack[++idx] = rem + '0';
        }
        dec /= base;
    }
    while(idx >= 0){
        printf("%c", remstack[idx--]);
    }
}