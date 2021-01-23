 

#include <conio.h>
int main()
{
float a,b,c,d,x1,x2;
cout << "Nhap ba he so a, b, c tuong ung la: " << endl;
cin>>a>>b>>c;
if(!a){
if(!b)
cout << "Ca a va b khong the cung bang 0 trong phuong trinh ax^2 + bx + c = 0" << "\n";
else
{
d=-c/b;
cout << "Phuong trinh co nghiem duy nhat : " << d << endl;
}
}
{
d=b*b-4*a*c;
if(d>0)
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout << "Nghiem thu nhat x1 = " << x1 << endl;
cout << "Nghiem thu hai x2 = " << x2 << endl;
}
return 0;
}
