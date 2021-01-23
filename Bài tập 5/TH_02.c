

#include<stdio.h>
int main(){
    int a;
   printf("Nhap  n:  ");
    scanf("%d",&a);
    int tong=0;
    for(int i=1;i<=a;i++){
        tong = tong + i ;
    } 
    printf("S = 1 + 2 +...+ %d",a);
    printf("\nTong = %d",tong);
  	return 0;
}
