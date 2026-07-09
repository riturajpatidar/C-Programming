#include <stdio.h>

int main()
{
    char ch = 'c';
    // ASCII Value
    printf("the value of character is %d\n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("the character is lowercase\n");
    }
    else
    {
        printf("the character is not lowercase\n");
    }

    return 0;
}