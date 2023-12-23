#include <stdio.h>

int main(){
	int n, count;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		count = 2;
		for(int j = 1; j <= i; j++){
			printf("%d", count);
			count += 2;
		}
		count -= 2;
		while(count > 2){
			count -= 2;
			printf("%d", count);
		}
		printf("\n");
	}
	return 0;
}
