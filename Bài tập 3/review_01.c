#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    static const char* suar_ki_gaand[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    printf( "%s", n>=1 && n<=9 ? suar_ki_gaand[n-1]: "Greater than 9" ); 
    return 0;
}
