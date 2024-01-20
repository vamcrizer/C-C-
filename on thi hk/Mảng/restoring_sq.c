#include<stdio.h>
int main(){
	int n, a[1000][1000]; scanf("%d", &n);
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) scanf("%d", &a[i][j]);
    int kq[n]; 
    
    kq[0] = (a[1][0] + a[2][0] - a[1][2])/2;

	for(int i=1; i<n; i++) 
    kq[i] = a[0][i] - kq[0];

	for(int i=0; i<n; i++) 
    printf("%d ", kq[i]);
}