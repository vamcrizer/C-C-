#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
int cmp(const void*a, const void*b){
	return ((ll)a) - ((ll)b);
}
int solve(ll a[], int n){
	for(int i=n-1; i>=2; i--){
		int l=0, r=i-1;
		while(l<r){
			ll tmp = a[l]+a[r];
			if(tmp==a[i]){
				return 1;
			}else if(tmp>a[i]) --r;
			else ++l;
		}
	}return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		ll a[n];
		for(int i=0; i<n; i++){
			scanf("%lld", &a[i]);
		}qsort(a, n, sizeof(ll), cmp);
		for(int i=0; i<n; i++){
			a[i] = a[i]*a[i];
		}
		if(solve(a, n)) printf("YES\n");
		else printf("NO\n");
	}
}