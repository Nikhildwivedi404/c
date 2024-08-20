# include <stdio.h>
int main(){
    int rows=5;
    // first loop printe all loop

    for( int i=0;i<rows;i++){

        // inner loop to print A character

        for ( int j=0;j<rows-i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;

}