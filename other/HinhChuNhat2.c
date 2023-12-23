#include <stdio.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		if(i > n){
			for(int j = i; j >= i - n + 1; j--){
				printf("%d", j);
			}
			printf("\n");
			continue;
		}
		for(int j = i; j <= n - 1; j++){
			printf("%d", j);
		}
		for(int j = n; j >= n - i + 1; j--){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
