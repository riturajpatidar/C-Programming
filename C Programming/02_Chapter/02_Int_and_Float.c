#include <stdio.h>

int main(){
    float a;
    float b;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    // int with int always int
    // int with float always float
    // float with float always float

    printf("the value of a/b is %f", a/b);
    return 0;
}