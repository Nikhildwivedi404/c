#include<stdio.h>
int main(){
    int a,b,c,k;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
    if(a>c)
        k=a;
    else
        k=c;
   } 
   else{
       if(b>c)
         k=b;
        else
         k=c;
   }
   printf("Greater number is %d",k);
   return 0;
     
}