#include<stdio.h>

int main(){
	int mang[5]; 
    for(int i=0;i<5;i++){	
			printf("nhap phan tu %d: ",i+1);
			scanf("%d",&mang[i]);
	}
   for(int i=0; i< 5; i++){
   	    if(mang[i]%2 == 0){
		   printf("phan tu la so chan la: %d\n", mang[i]);  
   }else if (mang[i]%2 != 0){
		   printf("phan tu khong la so chan la: %d\n", mang[i]);  
   }
}

	return 0; 
} 
