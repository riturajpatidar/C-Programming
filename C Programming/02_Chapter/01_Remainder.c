#include <stdio.h>

    int main()
{
    // remainder and sum
    int a, b;

    printf("Enter a\n");
    scanf("%d", &a);

    printf("Enter b\n");
    scanf("%d", &b);

    printf("The sum of a and b is %d\n", a + b);
    printf("The remainder when a is divided by b is: %d\n", a%b);

    return 0;
}