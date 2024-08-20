# include <stdio.h>

int main(){
int rows=5;

// first loop to printing all loop

for ( int i=0;i<rows;i++){

    //inner loop to print number 1 in each rows  

    for ( int j=0;j<rows-i;j++){
        printf("%d",j+1);
    }
        printf("\n");
}
        return 0;
}
