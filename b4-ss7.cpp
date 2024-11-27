#include <stdio.h>
int main(){
	int n;
	
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0 ; i < n ; i++){
		printf("nhap cac phan tu %d : ", i+1);
		scanf("%d", &a[i]); 
	}
	printf("cac phan tu trong mang la: ");
	for(int i=0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	
	
	
	
	return 0; 
} 
