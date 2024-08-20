# include <stdio.h>
int main(){
    int rows=10;

    // first loop printing rows

    for(int i=0; i<rows; i++){

        // loop for printing leading witespasces

        for(int j=0;j<2*(rows-i)-2;j++){
            printf(" ");
        }
       // loop for printing A character
       for(int k=0;k<=i;k++){

        printf("%c", k+'A');
        }
        printf("\n");

    }
    return 0;

    
}










