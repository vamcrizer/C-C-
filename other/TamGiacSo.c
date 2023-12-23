#include <stdio.h>

int main(){
	int n, count;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		count = 1;
		for(int j = 1; j <= i * 2 - 1; j++){
			printf("%d", count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
