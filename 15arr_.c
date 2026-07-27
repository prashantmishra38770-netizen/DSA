#include <stdio.h>
int main() {
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    arr[0]=arr[0]+arr[n-1];
    arr[n-1]=arr[0]-arr[n-1];
    arr[0]=arr[0]-arr[n-1];
    printf("\nArray elements after swapping first and last elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    
}