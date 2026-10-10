#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,8,11};
    int x = sizeof(arr)/sizeof(int);
    int j = 0;
    int arr2[x];
    for (int i = x-1; i >= 0; i--)
    {
        
        arr2[j] = arr[i];
        j++;
    }
    for (int k = 0; k < x; k++) {  
        printf("%d ", arr2[k]); 
    }
    return 0;
}
