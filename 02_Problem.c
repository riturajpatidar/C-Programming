#include <stdio.h>

float c2f(float); // functionn prototype

float c2f(float c)// function defination
{
    return (9/5 * c) + 32;
}

int main() {
    float c = 45;
    printf("Celsius to Fahrenheit of %.1f is %.1f\n", c, c2f(c));
    return 0;
}