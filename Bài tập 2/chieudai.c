#include <stdio.h>
int main(void){
    //khai bao bien
    int l,Met,Xentimet,Milimet;
    printf(" Nhap l= ");
    scanf("%d", &l	);
 	Met=l;
    Xentimet=l*100;
    Milimet=l*1000;
    printf("Met\tXentimet\tMilimet\n%d\t%d\t\t%d",Met,Xentimet,Milimet);
    return 0;
}
