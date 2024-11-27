#include <stdio.h>
int main(){
	int n;
	
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0 ; i < n ; i++){
		while (1){
		printf("nhap phan tu %d la so le : ", i+1);
	    scanf("%d", &a[i]); 
		if (a[i]%2 !=0){
			break; 
    	  }else {
    	  	printf("khong phai so le nhap lai \n");
		  }  
      }
    }
	printf("cac phan tu la so le la: ");
	for(int i=0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	
	
	
	
	return 0; 
} 
