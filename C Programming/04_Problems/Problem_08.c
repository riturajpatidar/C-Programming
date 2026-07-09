#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n){
        product *= i;
        i++;
    }
    printf("The Factorial of %d is: %d\n", n, product);
    return 0;
}