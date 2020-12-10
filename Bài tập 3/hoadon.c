#include <stdio.h>
int main() {
	// khai bao bien
	char a;
	long b;
  int dongia,soluong,thanhtien;
  
  printf ("hay nhap don gia  = "); scanf("%d",&a);
    
  printf ("hay nhap so luong =  "); scanf ("%d",&b);
  
  if (soluong <5){
  thanhtien = a * b;
  printf("thanh tien cua ban \n");
  printf("%d",thanhtien);
  }
  
  else if (soluong>=5){
  	//giam gia 25% = 75/100
  	thanhtien = (a*b)*75/100;
  	printf("thanh tien \n");
  	printf ("%d",thanhtien );
  }
  
  getchar ();
  return 0;
}
