#include <stdio.h>

int main(){
    for (int i = 0; i<15; i++)
    {
        if(i==5){
            continue;// exit the loop now!
            // continue (skip the iteration now!)
        }   
        printf("i is %d\n", i);
    }
    
    return 0;
}