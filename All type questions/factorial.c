#include<stdio.h>
int main(){
    int n,x,f=1;
    printf("Enter a number");
    scanf("%d",&n);
    x=n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    printf("Factorial of %d is %d",x,f);
    return 0;
}