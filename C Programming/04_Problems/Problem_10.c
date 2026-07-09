#include <stdio.h>

int main()
{
    int n;
    int not_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1 || n == 0)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime number.\n", n);
    }
    else
    {
        printf("%d is a prime number.\n", n);
    }

    return 0;
} // while loop