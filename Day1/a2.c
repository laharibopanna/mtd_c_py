#include<stdio.h>
int main()
{
    int averageScore = 0;
    puts("enter average score of the student");
    scanf("%d",&averageScore);
    else if(averageScore >= 0 && averageScore <=49)
        puts("result is fail");
    else if(averageScore >= 50 && averageScore <= 70)
        puts("Result is second class");
    else if(averageScore >= 71 && averageScore <=90)
        puts("Invaild score");
    else if(averageScore >= 91 && averageScore <=100)
        puts("Invaild score");
    else
        puts("Invalid score entered ")
}