#include <stdio.h>

int main(void) {
  int a[4]; // khai bao mang a gom 4 so
  int i, tong = 0; 
  a[0] = 3; // cac so trong hop
  a[1] = 5;// cac so trong hop
  a[2] = 7;// cac so trong hop
  a[3] = 2;// cac so trong hop

  
  for( i = 0; i < 4; i++){
    printf("\t%d", a[i]);
  }
  for(int i = 0; i < 4; i++){
 tong = tong + a[i];
 }
printf("\n tong cac so tu day tren = %d\n", tong);

return 0;
}

