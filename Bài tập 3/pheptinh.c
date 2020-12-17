#include <stdio.h>

int main() {
	//khai bao bien 
	int a = 5,b = 2;
	char pt;
	printf("vui long nhap phep tinh");
	scanf("%c", &pt);
	switch(pt){
		case '+':
		 printf("%d",a+b);
		        break;
        case '-': 
		printf("%d",a-b);
				break;
		default: printf("vui long nhap + hoac -");
	}
	getchar ();
 	return 0;
}
