#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,8,11};
    int x = sizeof(arr)/sizeof(int);
    int arr2[x];
    for (int i = 0; i < x; i++)
    {
        
        arr2[i] = arr[i];
        
    }
    for (int k = 0; k < x; k++) {  
        printf("%d ", arr2[k]); 
    }
    return 0;
}