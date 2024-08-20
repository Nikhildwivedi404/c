# include <stdio.h>
int main(){
   int rows =5;
    // first loop for print all loop

    for(int i=0;i<rows;i++){

        // iner loop 1 to wite space

        for( int j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        //iner loop print A character 

        for (int k=0;k<2*i+1;k++){
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}