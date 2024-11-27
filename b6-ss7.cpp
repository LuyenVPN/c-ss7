#include <stdio.h>
int main(){
	int n;
	
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0 ; i < n ; i++){
		printf("nhap phan tu %d la : ", i+1);
	    scanf("%d", &a[i]); 
		if (a[i]%2 !=0){
			a[i]+=2; 
    	  }else {
    	   a[i]+=3; 
		  }  
      }
	printf("cac phan tu la: ");
	for(int i=0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	
	
	
	
	return 0; 
} 
