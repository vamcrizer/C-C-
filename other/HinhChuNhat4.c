#include <stdio.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	if(m <= n){
		for(int i = 1; i <= m; i++){
			for(int j = n - i + 1; j >= 2; j--){
				printf("%d", j);
			}
			for(int j = 1; j <= i; j++){
				printf("%d", j);
			}
			printf("\n");
		}
	} else {
		for(int i = m; i >= n + 1; i--){
			for(int j = i; j >= i - n + 1; j--){
				printf("%d", j);
			}
			printf("\n");
		}
		for(int i = 1; i <= n; i++){
			for(int j = n - i + 1; j >= 2; j--){
				printf("%d", j);
			}
			for(int j = 1; j <= i; j++){
				printf("%d", j);
			}
			printf("\n");
		}
	}
	return 0;
}
