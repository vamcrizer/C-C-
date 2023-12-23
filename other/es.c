#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void shiftingLeft(int arr[], int k, int n) {
    if (k % n == 0){
        return;
    }
    k %= n;
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    int k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    shiftingLeft(arr, k, n);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}