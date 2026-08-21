#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // when evaluation order is not defined, the output is undefined behavior
    // 4 4 5
    // 6 6 4
return 0;
}