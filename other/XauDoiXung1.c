#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int factorial(int n){
    int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}

int combination(int n){
    return factorial(n) / (2 * factorial(n - 2));
}

int asc_cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
int desc_cmp(const void *a, const void *b){
    return (*(int *)b - *(int *)a);
}

int find_first(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l + r) / 2;
		if (a[mid] < x){
			l = mid + 1;
		} else {
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}
int find_last(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l + r) / 2;
        if (l == mid){
            return l;
        }
		if (a[mid] < x || a[mid] == x){
			l = mid;
		} else {
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    scanf("%d", &t);
    while (t--){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int count = 1;
    qsort(arr, n, sizeof(int), asc_cmp);
    for (int i = 1; i < n; i++){
        if (arr[i] == arr[i - 1]){
            count++;
        } else if (arr[i] != arr[i - 1]){
            sum += combination(count);
            count = 1;
        }
        if (i == n - 1){
            sum += combination(count);
        }
    }
    
    printf("%d\n", sum);
    }
    return 0;
}
