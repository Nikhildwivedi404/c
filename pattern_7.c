# include <stdio.h>
int main (){

    int rows=5;
    // first loop to print all loop 

    for( int i=0;i< rows;i++){

        // inner loop 1 to print white space

        for(int j=0;j<2*(rows-i)-2;j++){
            printf(" ");
        }
        //inner loop print star * character 
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}