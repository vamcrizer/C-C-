#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int check(int a[], int n){
    int l = 0, r = n - 1;
    while (l < r){
        if (a[l] != a[r]){
            return 0;
        }
        ++l, --r;
    }
    return 1;
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
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        if (check(a, n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}