#include <stdio.h>

int main(){
	int n,c, S = 0;
	printf("Nhap so cua phan luong phan tu: ");
	scanf("%d",&n);
		int a[n];
	for (c=0;c<n;c++){
		printf("Nhap phan tu thu la: ",c);
		scanf("%d",&a[c]);
	}
		printf("\n\nMang a[");
	for (c=0;c<n;c++){
		printf(" %d ",a[c]);
	}
		printf("]\n\n");
		printf("tong = ");
	for (c=0;c<n;c++){
		S = S + a[c];
		}
	printf("%d", S);
	return 0;
}
