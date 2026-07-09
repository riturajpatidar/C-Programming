#include <stdio.h>

int main(){
    int length, breadth;

    printf("Enter Leanth\n");
    scanf("%d", &length);
    printf("Enter Breadth\n");
    scanf("%d", &breadth);

    printf("The Area of Rectangle is %d", length*breadth);
    return 0;
}