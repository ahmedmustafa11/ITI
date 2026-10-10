#include <stdio.h>

int main(){

    int arr[] = {1,2,2,3,4,5};
    int x = sizeof(arr)/sizeof(int);
    int arr2[x];
    int unique = 1;
    for (int i = 0; i < x-1; i++)
    {
        unique = 1;

       for (int j = 1; j <= x; j++)
       {
        if (arr[i] == arr[j])
        {
            unique = 0;
        }
        
       }
       if (unique)
       {
        arr2[i] = arr[i];
       }
       
        
    }
    for (int k = 0; k < x; k++) {  
        printf("%d ", arr2[k]); 
    }
    return 0;
}