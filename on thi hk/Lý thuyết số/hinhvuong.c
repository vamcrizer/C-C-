#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int z1 = x2 - x1;
    int z2 = y2 - y1;
    if (z1 == z2){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}