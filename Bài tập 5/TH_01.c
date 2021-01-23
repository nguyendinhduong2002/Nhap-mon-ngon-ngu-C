
#include<stdio.h>
int main(){
    int n;
   printf("Nhap  n:  ");
    scanf("%d",&n);
    int tong=0;
    for(int i=1;i<=n;i++){
        tong = tong + i ;
    } 
    printf("S = 1 + 2 +...+ %d",n);
    printf("\nTong = %d",tong);
  	return 0;
}
