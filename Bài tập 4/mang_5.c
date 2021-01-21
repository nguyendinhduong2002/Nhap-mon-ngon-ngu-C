#include <stdio.h>
int main() {
  int i;
  int n;
  int m; 
    printf("nhap n =");
    scanf("%d",&n);
 int a[n];
 for( i=0;i<n;i++){
    printf("nhap phan tu  %d =",i+1);
    scanf("%d",&a[i]);
 }
    printf("cac phan tu cua mang a :");
 for(int i=0;i<n;i++){
    printf("%d ",a[i]);
 }   
	printf("\n Nhap so m can kiem tra: ");scanf("%d",&m); 
	for (i=0; i<n; i++){
		if (a[i]==m){
			
			break;
		}	
	}	
	if (i< 0){
		printf("ton tai");
	}
	else{
		printf("Khong ton tai");
	}	
}
