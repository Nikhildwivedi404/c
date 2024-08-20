# include <stdio.h>
int main(){
char rows = 5 ; ;
   // first loop for printing rows

   for( char i = 0; i<rows; i++){
    // second loop for printing number each rows 
        
    for( char j=0 ; j<=i; j++ ){
        printf( " %c ",'A' + j );
    }
    printf( "\n" );

   }
   return 0;
}