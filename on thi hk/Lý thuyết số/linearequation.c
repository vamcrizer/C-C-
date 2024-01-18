 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0){
        printf("Infinite solutions");
    }
    else if (a == 0 && b != 0){
        printf("No solution");
    }
    else{
        printf("%.2f", (float)-b/a);
    }
}