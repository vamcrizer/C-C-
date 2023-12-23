#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		int i,sum = 0;
		scanf("%d",&n);
		while(n>0){
			i = n % 10;
			sum += i;
			n/= 10;
		}
		if (sum % 10 == 0){	
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
