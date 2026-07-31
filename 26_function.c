#include <stdio.h>
void main(){
    int arr1[5]={1,2,34,56,78};
    int max,i;
    max=arr1[0];
    for(i=0;i<5;i++)
    {
        if(arr1[i]>max)
        {
            max=arr1[i];
        }
    }
    printf("max element in array is:=%d",max);
    
}
