#include<stdio.h>
int main()
{
    int intnum = 0;
    puts("Enter a number to check if it is even");
    scanf("%d",&intnum);
    if(intnum % 2 == 0)
        printf("%d is even\n\n", intnum);
    else
        printf("%d is not an even\n\n", intnum);
        return 0;
}