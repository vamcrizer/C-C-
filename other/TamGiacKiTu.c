#include <stdio.h>

int main(){
	int n, count = -1;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		count += i;
		if(i % 2 == 0){
			for(int j = count; j >= count - i + 1; j--){
				printf("%c ", j + 'a');
			}
		} else {
			for(int j = count - i + 1; j <= count; j++){
				printf("%c ", j + 'a');
			}
		}
		printf("\n");
	}
	return 0;
}
