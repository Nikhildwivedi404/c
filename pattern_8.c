# include <stdio.h>

int main(){

    int rows =5;

    // first loop to printing all loop

    for( int i=0;i<rows;i++){

        // iner loop 1 to print wite space

        for( int j=0;j<2*(rows-i)-2;j++){
            printf(" ");
        }
        // iner loop print one 1 character
        for( int k=0;k<2*i+1;k++){
            printf("%d",k+1);
        }
        printf("\n");
    }
    return 0;
}