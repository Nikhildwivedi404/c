# include <stdio.h>
int main(){
    int rows=5;

    // first loop to print all rows
    for( int i=0;i<rows;i++){

        // first inner loop to printing white spaces
        for( int j =0;j<2*i;j++){
            printf(" ");
        }
        // second inner loop for printing star *

        for( int k=0;k<rows-i;k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}