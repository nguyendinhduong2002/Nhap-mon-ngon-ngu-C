#include<stdio.h>
int main(){
   int n1,n2;
   char *s[]={"one","two","three","four","five","six","seven","eight","nine"};
   scanf("%d",&n1);
   scanf("%d",&n2);
   for(int i =n1;i<=n2;i++){
       if(i<=9){
                printf("%s\n",s[i-1]);
        }
        else{
                i%2==0?printf("even\n"):printf("odd\n");
        }
     }
}
