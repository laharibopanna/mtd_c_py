#include <stdio.h>
int main() 
{
    int num, digit, smallestDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    smallestDigit = 9;
    while (num != 0)
     {
        digit = num % 10;

        if (digit < smallestDigit) 
        {
            smallestDigit = digit;
        }
        
        num = num / 10;
    }

    printf("The  smallest digit is: %d\n", smallestDigit);

    return 0;
}


    
