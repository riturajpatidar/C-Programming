#include <stdio.h>
int sum_natural(int);
int sum_natural(int n){
    return n*(n+1)/2;
}
 //if (n == 1) {
        //return 1;
   // }
    //return sum_natural(n-1) + n; // if (n == 1) return 1 | else n + (n-1)

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d", n, sum_natural(n));
    return 0;
}