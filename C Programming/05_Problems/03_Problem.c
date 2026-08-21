#include <stdio.h>
float force(float); //function prototype

float force(float m){ // function definition
    return m*9.8;
}
int main()
{
    float m, F;
    printf("Enter the mass in kg: ");
    scanf("%f", &m);

    F = force(m);

    printf("The force of attraction by %.2f kg is %.2f N\n", m, F);
    return 0;
}