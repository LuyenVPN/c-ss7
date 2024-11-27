#include<stdio.h>

int main(){
	int mang[5]; 
    for(int i=0;i<5;i++){	
			printf("nhap phan tu %d: ",i+1);
			scanf("%d",&mang[i]);
	}
    printf("Mang vua nhap la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
	
	return 0; 
} 
