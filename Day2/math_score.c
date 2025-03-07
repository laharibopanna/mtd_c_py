#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number for Math table:\t");
    scanf("%d",&num);

    printf("Multiplication table for %d:\n", num);
    
    for (int i = 1; i <= 10; i++) {
        printf("%02hd x %02hd = %03hd\n", num, i, num * i);
    }

    return 0;
}
