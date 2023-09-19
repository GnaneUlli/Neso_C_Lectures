#include <stdio.h>

int main() {
    int num1, num2, sum, carry;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    while (num2 != 0) {
        // Calculate the carry
        carry = num1 & num2;// Calculate the sum
        num1 = num1 ^ num2;// Carry is shifted by one position and added to num2
        num2 = carry << 1;
    }
    sum = num1;
    printf("Sum: %d\n", sum);
    return 0;
}
