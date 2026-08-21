#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a+b+c)/3.0;
}

int main(){
    int a, b, c;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    avg = average(a, b, c);
    printf("The average is: %f\n", avg);
    return 0;
}