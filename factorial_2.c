#include <stdio.h>
int main(){
    int n=50;

    printf("Factors of %d are:\n",n);
    // finding and printing factors b/w 1 to num

    for(int i=1;i<=n;i++){
        // if n is divisible by i,then i is a factor of n
        if (n% i==0)
        printf("%d",i);
    }
    return 0;
}