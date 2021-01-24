  
#include <stdio.h>

int main(){
    int n, i, sum_a, sum_b;
    
    printf("Chuong trinh tinh tong chan va le tu 1 den n\n");
    printf("Nhap n: ");scanf("%d",&n);
	
    for (i=1;i<=n;i++){
    	if (i%2==0){ //so chan
    		sum_a+=i;
		}
		else{ //so le
			sum_b+=i;
		}
	}
    printf("Tong cac so chan = %d\n",sum_a);
    printf("Tong cac so le = %d",sum_b);
    return 0;
}
