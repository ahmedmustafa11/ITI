#include <stdio.h>


int main(){
    while (1)
    {
      
    
        int x;
        printf("Enter the year to check if it's a leap: ");
        scanf("%d", &x);

        if (x>0)
        {
            if (x %4 == 0)
            {
                printf("%d is a leap year",x);

            }
            else{
                printf("Nope");
            }
            
        }
        else{
            printf("try again");
        }
    printf("\n");
    }
}
