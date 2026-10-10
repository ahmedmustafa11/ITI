#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int x = sizeof(arr)/sizeof(int);
    int temp;
    
    for (int i = 0; i < x-1; i++)
    {
        for (int j = 1; j < x; j++)
        {
            if (arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
        
    }
    
    for (int k = 0; k < x; k++) {  
            printf("%d ", arr[k]); 
        }    return 0;
}