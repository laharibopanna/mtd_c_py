#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // Check if it's a 4-digit number
    if (number < 1000 || number > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }

    // Sum the digits of the number
    while (number > 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;         // Add it to sum
        number /= 10;         // Remove the last digit
    }

    // If sum is more than 9, reduce it to a single digit
    while (sum >= 10) {
        int temp = 0;
        while (sum > 0) {
            temp += sum % 10; // Sum the digits of the result
            sum /= 10;
        }
        sum = temp; // Update sum with the new value
    }

    printf("Compressed number: %d\n", sum);
    return 0;
}
