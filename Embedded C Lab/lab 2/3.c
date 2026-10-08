#include <stdio.h>
//C program that prompts the user to enter a positive integer. Use a loop to print the multiplication table for that number up to 10.
int main() {

    int x;
    printf("Enter a positive integer: ",x);
    int e = scanf("%d", &x);
    int i = 0;
    while (i<=10)
    {
        int z= x*i;
        printf("%dx%d = %d\n", x,i,z);
        i++;
    }
    
}
