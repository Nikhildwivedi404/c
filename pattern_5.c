# include <stdio.h>
int main (){

    int rows=10;

    //fist loop printing rows

    for(int i=0;i<rows;i++){
        // loop for printing leading whitespaces

        for(int j=0;j<2*(rows-i)-2; j++){
            printf(" ");
        }
           // loop for  printing 1 character

           for(int k=0;k<=i;k++){
            printf("%d",k+1);
           }  

            printf("\n");

           }
           return 0;
    }