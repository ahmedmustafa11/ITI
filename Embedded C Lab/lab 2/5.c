#include <stdio.h>
//C program to make a pyramid pattern using an asterisk (*).
int main(){

    int n;
    printf("Enter Pyramid height: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int  k = n-i; k >= 0; k--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
