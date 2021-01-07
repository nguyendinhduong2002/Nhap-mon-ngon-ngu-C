#include <stdio.h>

int main(void) {
  int n;//khai báo 1 so nguyên n
  
  printf("nhap:");// hien thi ra màn hình bang cuu chuong duoc nhap tu bàn phím
  
  scanf("%d", &n);
   
  for(int i = 1; i <= n; i++){// dieu kien hien thi ra bang nhân s? ....
     
     printf("bang cuu chuong cua: %d\n", i);
    
     for (int j = 0; j <= 10; j++){//  dieu kien hien thi ra phép nhân trong bang cuu chuong
      
      printf("\t%d * %d = %d\n", i, j, i*j);
      } 
    }  
  return 0;
}
