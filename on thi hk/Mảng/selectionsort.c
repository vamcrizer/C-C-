#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int i, j, min_idx;
    for (i = 0 ; i < n - 1; i++){
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if (a[j] < a[min_idx]){
                min_idx = j;
            }
        }
        swap(&a[i], &a[min_idx]);
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
}