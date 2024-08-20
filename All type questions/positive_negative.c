#include <stdio.h>

int main() {
    int number;
    printf("Enter an number: ");
    scanf("%d", &number);
    if (number>2) {
        printf("The number is positive.\n");
    }  else {
        printf("The number is negative.\n");
    } //else {
      //  printf("The number is zero.\n");
   // }

    return 0;
}
