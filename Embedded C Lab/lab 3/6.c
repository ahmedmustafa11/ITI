#include <stdio.h>

int main(){

    int arr[] = {1,2,2,3,4,5};
    int x = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < x; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
        
    }
    
    printf("biggest number is %d",max);
    printf("\nsmallest number is %d",min);
    return 0;
}