 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

 int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int x,y;
    scanf("%d%d", &x, &y);
    for (int i = 0 ; i < m; i++){
        swap(&a[i][x - 1], &a[i][y - 1]);
    }
    for (int i = 0; i < m; i++){
        for (int j = 0 ; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
 }