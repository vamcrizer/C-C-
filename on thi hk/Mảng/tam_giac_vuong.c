#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;
int cmp(const void*a, const void*b){
    return *(ll*)a - *(ll*)b;
}

int binarySearch(ll arr[], int n, ll x)
{
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    ll a[n];
    for (int i = 0; i< n;i++){
        scanf("%lld", &a[i]);
    }
    qsort(a, n, sizeof(ll), cmp);
    int ok = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            double k = sqrt(a[i]*a[i] + a[j]*a[j]);
            if (floor(k) == ceil(k)){
                if(binarySearch(a, n, 1ll * k) != -1){
                    ok = 1;
                    break;
                }
            }
            if (ok){
                break;
            }
            
        }
    }
    if (ok){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
}