#include <stdio.h>

int main() {	
	//khai bao bien a , b
	int a,b;
	a = 3;b=5;
	
	int tong; int hieu; int thuong; int tich;
	
	tong=a+b ; hieu=a-b ; thuong=a/b ; tich=a*b;
	
	printf ("tong= %d\n",a+b );
	
	printf ("hieu=%d\n",a-b);
	
	printf("thuong=%d\n",a/b);
	
	printf("tich=%d\n",a*b);
	
	double c=3;
	double d=5;
	
	printf("thuong=%g",c/d);
	
	getchar();
  	return 0;
}
