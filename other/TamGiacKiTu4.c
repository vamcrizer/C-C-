#include <stdio.h>

int main(){
	int n, count;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		count = 0;
		for(int j = 1; j <= i; j++){
			printf("%c", count + 'A' - 1);
			count += 2;
		}
		count -= 2;
		while(count){
			count -= 2;
			printf("%c", count + 'A' - 1);
		}
		printf("\n");
	}
	return 0;
}
