#include <stdio.h>

int fac(int a);

int main(){

    int x;
    printf("Enter number to get it factorial: ");
    scanf("%d", &x);
    
    printf("%d factorial is %d", x, fac(x));
    

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
