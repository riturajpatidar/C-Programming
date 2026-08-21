#include <stdio.h>

int factorial(int n);

// Factorial(n) = 1 x 2 x 3 … x n
// Factorial(n) = 1 x 2 x3 … (n-1) x n
// Factorial(n) = Factorial (n-1) x n

int factorial(int n)
{
    if (n == 0 || n == 1) // Base condition
    { 
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int n = 7;
    printf("The factorial of %d is %d", n, factorial(n));

    return 0;
}