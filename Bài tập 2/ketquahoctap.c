#include <stdio.h>

int main(void) {
  //khai bao bien
  int V,T,Van,Toan;
  double DTB;
  printf  ("Nhap V =");
  scanf  ("%d",& V);
  printf (" Nhap T =");
  scanf  ("%d",& T);
  Van=V;
  Toan=T;
  DTB=(double)(V+T)/2;
  printf("Van\tToan\tDTB\n%d\t%d\t%0.1f",Van,Toan,DTB);
  return 0 ;
}
