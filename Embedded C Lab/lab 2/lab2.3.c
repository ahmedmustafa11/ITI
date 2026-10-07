#include <stdio.h>


int main(){

    int x,y,i;
    int z = 1;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    for (int i = x; i <= y; i++)
    {
        for (int j = 2; j < i; j++)
        {
            
            if (i%j == 0)
            {
                int z = 1;
            }
            
        }
        if (!z)
        {
            printf("%d is a prime number",i);
            int z = 0;
        }
        
        
        
    }
    return 0;

}
