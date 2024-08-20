#include<stdio.h>
 int main(){
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers");
    for(i=0;1<=9;i++)
       scanf("%d",& a[i]);
    for(i=0;i<=9;i++)
        if(a[i]%2==0)
           se=se+a[i];
           else
               so=so+a[i];

    printf("sum of even=%d",se);
    printf("\n sum of odd=%d",so);   
        
 
 return 0;
 }