#include <stdio.h>
int main() {
	// khai bao bien
	char a;
	long b;
  int dongia,soluong,thanhtien;
  
  printf ("hay nhap don gia  = "); scanf("%d",&a);
    
  printf ("hay nhap so luong =  "); scanf ("%d",&b);
  
  if (soluong <5 && dongia <500){ // so luong mua duoi 5
  	thanhtien = a * b;
  	printf("thanh tien \n"); 
  	printf("%d",thanhtien );
  }
  
  else if (b>=5 && a >= 500){ // so luong mua tu 5 va don gia tu 500 tro len	
	thanhtien = (a*b)*50/100;
  	printf("thanh tien \n"); 
	printf ("%d",thanhtien );
  	
  }
