#include <stdio.h>
int main() 
{
    int num, digit, smallest_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    smallest_digit = 9;
    while (num != 0)
     {
        digit = num % 10;

        if (digit < smallest_digit) 
        {
            smallest_digit = digit;
        }

        num = num / 10;
    }

    printf("The smallest digit is: %d\n", smallest_digit);

    return 0;
}


    
