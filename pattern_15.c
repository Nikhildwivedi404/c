# include <stdio.h>
int main (){
    int rows=10;
    // first loop for  printing all rows

    for( int i=0;i<rows;i++){

        // first inner loop for printing leading white spaces

        for( int j=0;j<2*i;j++){
            printf(" ");
        }
        for ( int k=0;k<2*(rows-i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}