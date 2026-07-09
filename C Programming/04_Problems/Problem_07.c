#include <stdio.h>

int main(){
    int n;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        product *= i;
    }
    printf("The Factorial of %d is: %d\n", n, product);
    return 0;
}