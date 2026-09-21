#include <stdio.h>
int sum(int* a, int* b);

int sum(int* a, int* b){
    *a = 1;
    return *a + *b;
}
int main(){
    int x = 5, y = 10;
    
    printf("Sum of 5 and 10 is: %d\n", sum(&x, &y));
    printf("the value of x is %d", x);
    return 0;
}