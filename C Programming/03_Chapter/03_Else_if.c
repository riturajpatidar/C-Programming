#include <stdio.h>

int main()
{
    int age = 60;

    if (age > 50)
    {
        printf("you can drive and you are senior citizen\n");
    }
    else if (age > 18)
    {
        printf("you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    return 0;
}