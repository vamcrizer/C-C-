#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int temp;
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Đánh dấu đã hoán đổi
            }
        }
        printf("\n");
        if (swapped == 0) {
            break;
        }
        printf("Step %d: ", i + 1);
        for (int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }