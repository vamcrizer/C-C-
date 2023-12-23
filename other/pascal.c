#include <stdio.h>
int gt(int n)
{
	if (n ==0 || n==1){
		return 1;
	}
	else{
		return n * gt(n-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i,j;//i la so dong j la so cot
	int sodem;
	for (i = 0; i< n; i++ ){
		for ( j =0; j<=i;j++){
			int sodem = gt(i) / (gt(j) * gt(i-j)) ;
			printf("%d ", sodem);
		} 
		printf("\n");
	}
}
