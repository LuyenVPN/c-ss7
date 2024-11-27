#include <stdio.h>
int main(){
	int a[5]= {3,4,7,2,9};
	int arraysize= sizeof(a)/sizeof(int);
	printf("phan tu thu nhat la: %d\n", a[0]); 
	printf("phan tu thu hai la: %d\n", a[1]); 
	printf("phan tu thu ba la: %d\n", a[2]); 	
	printf("phan tu thu tu la: %d\n", a[3]); 	
	printf("phan tu thu nam la: %d\n", a[4]); 	
	printf("chieu dai mang la: %d\n", arraysize); 
	
	return 0; 
} 
