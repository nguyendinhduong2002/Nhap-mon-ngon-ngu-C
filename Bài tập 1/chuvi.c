#include <stdio.h>
#define PI 3.14
int main (void){
	//khai bao R kieu double va gan R=2.25
	double R;
	R = 2.5;				
	//in chu vi va dien tich ra man hinh 
	printf("Chu vi\tDien Tich\n");	
	//khai bao VC va DT
	double CV,DT;
	//gan VC voi CThuc 2*R*PI va DT voi CThuc la R*R*PI 
	CV = 2*R*PI;   DT = R*R*PI;
	
	//in ket qua CV va DT ra man hinh
	printf("%g\t%g",CV,DT);
	return 0;
}
