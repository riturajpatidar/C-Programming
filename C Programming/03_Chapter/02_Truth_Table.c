#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    // this is called truth table "&" (AND) "||" (OR) ! (NOT)

    printf("the value of a and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);
    printf("the value of not(a) is %d\n", !a);

    if (a&&b){
        printf("a and b are true\n");
    }
    else{
        printf("a and b are not true\n");
    }
    if (a||b){
        printf("a or b are true\n");
    }
    else{
        printf("a or b are not true\n");
    }
    return 0;
}