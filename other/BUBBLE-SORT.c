#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int ch[n];
	int i,j,l;
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	int temp;
	int step  =1;
//	while (t--){
//		int check =1;
//		for (i = 0; i< n -2; i++){
//			for (j = i + 1;j< n-1;j++){
//				if (ch[i] > ch[j]){
//					temp = ch[i];
//					ch[i] = ch[j];
//					ch[j] = temp;
//				}
//				break;
//			}
//		}
//		printf("Step %d: ",step);
//		step++;
//		for ( l=0;l<n;l++){
//			printf("%d ",ch[l]);
//		}
//		printf("\n");
//		
//		for (i = 0; i < n-2;i++){
//			for (j = i+1; j < n-1 ; j++){
//				if (ch[i] > ch[j]){
// 					check =0;
//					break;	
//				}
//			}
//		}
//		if (check  == 1){
//			break;
//		}
//	}

	for (i=0; i< n-1; i++){
		int check = 1;
		for (j = 0 ;j < n - 1; j++){
			if (ch[j+1] < ch[j]){
				temp = ch[j+1];
				ch[j+1] = ch[j];
				ch[j] = temp;
				check  = 0;
			}
		}
		if (check  == 1){
			break;
		}
		printf("Buoc %d: ",step);
		step++;
		for ( l=0;l<n;l++){
			printf("%d ",ch[l]);
		}
		printf("\n");
	}
	
}

