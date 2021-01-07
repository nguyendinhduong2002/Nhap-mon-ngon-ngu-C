#include <stdio.h>

int main(void) {
  int n;//khai báo 1 s? nguyên n
  printf("nhap:");// hi?n thi ra màn hình b?ng c?u chuong du?c nh?p t? bàn phím
  scanf("%d", &n);
   for(int i = 1; i <= n; i++){// d?t di?u ki?n hi?n th? ra b?ng nhân s? ....
     printf("bang cuu chuong cua: %d\n", i);
    for (int j = 0; j <= 10; j++){// d?t di?u ki?n hi?n th? ra phép nhân trong b?ng c?u chuong
      printf("\t%d * %d = %d\n", i, j, i*j);
      } 
    }  
  return 0;
}
