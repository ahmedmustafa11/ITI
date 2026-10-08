#include <stdio.h>

//C program to print the prime numbers for a given range.
int main(){

    int x,y,i;
    int z = 1;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    for (int i = x; i <= y; i++)
    {
        z = 1;
        for (int j = 2; j < i; j++)
        {
            
            if (i%j == 0)
            {
                z = 0;
                break;
            }
            
            
        }
        if (z)
        {
            printf("%d is a prime number\n",i);
           
        }
        
        
        
    }
    return 0;

}
