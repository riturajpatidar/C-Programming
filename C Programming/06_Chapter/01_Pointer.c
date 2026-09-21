#include <stdio.h>

int main(){
int i = 72;
int*j = &i; // j is a pointer pointinf to i

    printf("The address of i is %p\n", &i); // for integer value we can use %u
    printf("The address of i is %p\n", j);

    printf("The value of address at j is %d", (*j));

    return 0;
}