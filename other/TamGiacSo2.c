#include <stdio.h>

int main(){
	int n, count;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0) count = 2;
		else count = 1;
		for(int j = 1; j <= i; j++){
			printf("%d", count);
			count += 2;
		}
		printf("\n");
	}
	return 0;
}
