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
	} printf("\n"); 
	int max = a[0];
    int min = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("gia tri lon nhat la: %d\n", max);
    printf("gia tri nho nhat  là: %d\n", min);
	
	
	
	
	return 0; 
} 
