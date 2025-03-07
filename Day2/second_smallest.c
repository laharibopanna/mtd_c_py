#include <stdio.h>
#include <limits.h>

int second_smallest_digit(int number) 
{
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int digit;

    while (number > 0) 
    {
        digit = number % 10;
        number /= 10;

        if (digit < smallest) 
        {
            second_smallest = smallest;
            smallest = digit;
        } else if (digit < second_smallest && digit != smallest) 
        {
            second_smallest = digit;
        }
    }

    return (second_smallest == INT_MAX) ? -1 : second_smallest;
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = second_smallest_digit(number);
    if (result == -1) 
    {
        printf("There is no second smallest digit.\n");
    } else {
        printf("The second smallest digit is: %d\n", result);
    }

    return 0;
}
