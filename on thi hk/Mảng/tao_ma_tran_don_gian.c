 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int x = 0;
        for (int j = 0; j < n; j++){
            
            if (j <= i){
                printf("%d ", 0);
            } else {
                printf("%d ", ++x);
            }
        }
        printf("\n");
    }
}