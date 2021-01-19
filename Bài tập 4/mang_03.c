   
#include <stdio.h>

int main() {
	int n;
	printf("Nhap gia tri phan tu : ");scanf
	("%d",&n);
		int a[n];	
	for (int b=0;b<n;b++){
	printf("Nhap phan tu thu la %d: ",b+1);scanf
		("%d",&a[b]);
}	
	printf("\n\nMang a[");
	for (int b=0;b<n;b++){
		printf("%d ",a[b]);
}
	printf("]\n\n");
		int count_odd=0,count_even=0,count_0=0;
	for (int b=0; b<n; b++){
		if (a[b]%2 != 0){
			count_odd+=1;
		}
		else if (a[b] == 0){
			count_0+=1;
		}
		else if (a[b]%2 == 0){
			count_even+=1;
		}
}
	printf("Mang co %d so le, %d so chan, %d so 0\n",count_odd,count_even,count_0);	
	printf("\nCac so le: ");
	for(int b=0;b<n;b++){
		if (a[b]%2 != 0){
			printf("%d  ",a[b]);
		}
}	
	printf("\nCac so chan: ");
	for(int b=0;b<n;b++){
		if (a[b]%2 == 0 && a[b]!=0){
			printf("%d  ",a[b]);
}
}
}
