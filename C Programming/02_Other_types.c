#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a character pointer pointinf to i
    float k = 5.2222;
    float *k1 = &k;

    printf("The address of i is %p\n", &i); // for integer value we can use %u
    printf("The address of i is %p\n", j);

    printf("The value of address at j is %f", (*j));

    return 0;
}