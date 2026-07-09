#include <stdio.h>

int main(){
    int i = 2;
    printf("The value of i is %d\n", i); //

    i = i +=5; // (+= -= *= & more are compound assingment operater)
    printf("The value of i is %d\n", i++); //
    i = i +=5;
    printf("The value of i is %d\n", ++i); //

    // i++ is print i then increment i 
    // ++i is increment i then print i similarly for i-- or --i
    
    return 0;
}