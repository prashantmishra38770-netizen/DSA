#include <stdio.h>

void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    
    {
        printf("array element are=%d\n", arr[i]);
    
    
       
    }
}
void inputArr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void main()
{
    int arr1[3]; 
    int arr2[5]; 
    int arr3[7]; 
    printf("enter array1 elements:");
    inputArr(arr1,3);


    printf("first array elements:\n");
    display(arr1, 3);
    printf("enter array2 elements:");
    inputArr(arr2,5);


    printf("second array elements:\n");
    display(arr2, 5);
    printf("enter array3 elements:");
    inputArr(arr3,7);


    printf("third array elements:\n");
    display(arr3, 7);

}