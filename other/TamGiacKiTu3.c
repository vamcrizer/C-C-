#include <stdio.h>

int main(){
	int n, count;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		count = i;
		printf("%c ", count + 'A' - 1);
		for(int j = n - 1; j >= n - i + 1; j--){
			count += j;
			printf("%c ", count + 'A' - 1);
		}
		printf("\n");
	}
	return 0;
}
