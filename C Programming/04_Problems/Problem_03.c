#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    while(i <= 10){
        sum += i;
        i++;
    }
    printf("The sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
} // by while loop