#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int result;

    // Input the numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 8 && num2 > 8) {
        // Both numbers are greater than 8, so add them
        result = num1 + num2;
    } else if (num1 > 8 || num2 > 8) {
        // One of the numbers is greater than 8, so multiply them
        result = num1 * num2;
    } else if (num1 < 8 && num2 < 8) {
        // Both numbers are less than 8, so add 1 to them
        result = num1 + num2 + 1;
    } else {
        // Neither of the above conditions met, so print "Hello World"
        printf("Hello World\n");
        return 0; // Exit the program
    }

    // Check if the result is even or odd
    if (result % 2 == 0) {
        printf("Result is even: %d\n", result);
    } else {
        printf("Result is odd: %d\n", result);
    }

    return 0;
}
