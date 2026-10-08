#include <stdio.h>
// C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number.
int fac(int a);

int main(){

    int x;
    printf("Enter number to get it factorial: ");
    scanf("%d", &x);
    
    printf("%d factorial is %d", x, fac(x));
    
    return 0;
}

int fac(int a){
    if (a <=1 )
    {
        return 1;
    }
    else{
        return a * fac(a-1);
    }
}
