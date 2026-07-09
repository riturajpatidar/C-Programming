#include <stdio.h>

int main(){
    int r, h;

    printf("enter Radius: ", r);
    scanf("%d", &r);

    printf("enter height: ", h);
    scanf("%d", &h);

    printf("The Area of Circle with Radius %d is %f\n", r, 3.14*r*r);
    printf("The Volume of Cyclinder wiht Radius %d and height %d is %f", r, h, 3.14*r*r*h);
    
    return 0;
}