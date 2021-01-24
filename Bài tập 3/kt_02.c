#include <stdio.h>

int main(){
	float a, b, c,Denta;
	
	printf ("\n nhap vao a = ");
	scanf ("%f", &a);
	printf ("\n nhap vao b = ");
	scanf ("%f", &b);
	printf ("\n nhap vao c = ");
	scanf ("%f", &c);
 
	if (a == 0 && b==0 &&c==0){
		printf ("\n phuong trinh co vo so nghiem");
 	}
 	else{
		Denta = b * b - 4 * a * c ;
		if (Denta < 0){
  	 		printf ("\n phuong trinh vo nghiem ");
 		}
		else if (Denta == 0 ){
			float x = -b / (2 * a );
   			printf ("\n phuong trinh co nghiem kep x1 = x2 = %f", x);
 		}
		else { 
    		float x1 = (-b + sqrt(Denta)) / (2 * a);
			float x2 = (-b - sqrt(Denta)) / (2 * a);
     		printf ("\nphuong trinh co 2 nghiem phan biet:\nx1 = %f\nx2 = %f" , x1 , x2);
 		}
 		}
	getchar();
	return 0;
  }
