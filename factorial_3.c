#include<stdio.h>
int main(){

    int num=100;
    printf("Factors of %d are :\n",num);
    // findin and printing factors b/w 1 to num/2
    for(int i=1;i<= num/2;i++){
        // if num is divisible by i, then i is a factor of num

        if( num%i==0)
        printf("%d",i);

    }
    printf("%d",num);
    return 0;
}