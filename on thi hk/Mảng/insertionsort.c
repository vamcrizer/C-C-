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
    int i, key, j;
    for (int i = 0; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j -= 1;
        }
        a[j + 1] = key;
    
    for(int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
        printf("\n");
    }
}
