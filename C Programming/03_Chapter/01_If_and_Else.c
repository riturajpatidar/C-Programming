#include <stdio.h>

int main()
{
    int age = 16;

    if (age > 10)
    {
        printf("your age is greater than 10\n");
    }
    else
    {
        printf("your age is not greater than 10\n");
    }
    if (age %5 == 0)
    {
        printf("your age is divisible by 5");
    }
    else
    {
        printf("your age is not divisible by 5");
    }
    return 0;
}