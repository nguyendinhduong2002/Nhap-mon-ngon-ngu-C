#include<stdio.h>
int main () {
	
	printf("Bang cuu chuong:");
	int n;
	n = 2;
	printf("bang cuu chuong 2\n");
	printf(" 2*1 =%d\n 2*2 = %d\n 2*3 =%d\n",n*1,n*2,n*3);
	n = 3;
	printf("bang cuu chuong 3\n");
	printf(" 3*1 =%d\n 3*2 = %d\n 3*3 =%d\n",n*1,n*2,n*3);
	n = 4;
	printf("bang cuu chuong 4\n");
	printf(" 4*1 =%d\n 4*2 = %d\n 4*3 =%d\n",n*1,n*2,n*3);
	n = 5;
	printf("bang cuu chuong 5\n");
	printf(" 5*1 =%d\n 5*2 = %d\n 5*3 =%d\n",n*1,n*2,n*3);
	
	return 0;
	}




bang cuuc chuong ngắn gọn

#include <stdio.h>

int main(){
	int a,b;
	printf("Bang cuu chuong 2\n");
	a=2;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	printf("Bang cuu chuong 3\n");
	a=3;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	printf("Bang cuu cuong 4\n");
	a=4;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	return 0;
}



