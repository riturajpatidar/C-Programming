#include <stdio.h>
int main(){
    float r;
    int p, t;

    printf("Enter Rates\n", r);
    scanf("%f", &r);

    printf("Enter Principle\n", p);
    scanf("%d", &p);

    printf("Enter Time\n", t);
    scanf("%d", &t);

    printf("the value of simple intrest is %f", (p*r*t)/100);

    return 0;
}