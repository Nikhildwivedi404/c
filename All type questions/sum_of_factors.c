#include <stdio.h>

int sum_of_factors(int n) {
    int sum_factors = 0;
    

    for (int i = 1; i <= n; ++i) {
        
        if (n % i == 0) {
            sum_factors += i;
        }
    }
    
    return sum_factors;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = sum_of_factors(number);
    printf("The sum of factors of %d is %d\n", number, result);

    return 0;
}
