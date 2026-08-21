#include <stdio.h>
int fabonacci(int ); //function prototype
int fabonacci(int n) //function definition
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fabonacci(n-1)+fabonacci(n-2);
} 
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for(int i=0; i<n; i++)
        printf("%d ", fabonacci(i));
    return 0;
}