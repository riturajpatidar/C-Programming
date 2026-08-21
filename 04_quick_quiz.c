#include <stdio.h>
#include <math.h>

int main()
{
    float a, area;

    printf("Enter the side of square: ");
    scanf("%f", &a);

    area = pow(a, 2);

    printf("Area of square = %f", area);

    return 0;
}