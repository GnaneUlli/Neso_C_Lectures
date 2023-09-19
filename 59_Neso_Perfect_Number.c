#include <stdio.h>
int main() {
    int num, sum = 0;
     printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Check if num is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }
    // Find the sum of all divisors of num
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }// Check if num is a perfect number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
