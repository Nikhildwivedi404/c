# include <stdio.h>
int main(){

    int rows=5;
    // outer loop for rows

    for( int i=1;i <=rows;i++){

        // inner loop 1 for leading white spaces
        for(int j=0; j<rows-i;j++){
            printf(" ");
        }
        int c=1;// coefficient
        // inner loop 2 for printing numbers
        for(int k=1;k<=i;k++){
            printf("%d",c);
            c=c*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}