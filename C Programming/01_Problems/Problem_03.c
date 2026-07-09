#include <stdio.h>

int main(){
    float c;

    printf("Enter Celcius Value", c);
    scanf("%f", &c);

    printf("The value in faherehnite is %f", (9.0/5.0)*c + 32);
    return 0;
}