#include <stdio.h>
int sum(int a, int b);

int sum(int a, int b){
    return a + b;
}
int main(){
    
    printf("Sum of 5 and 10 is: %d\n", sum(5, 10));
    return 0;
}