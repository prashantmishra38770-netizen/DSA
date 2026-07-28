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
    int temp;
    int index=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            index++;

        }
    }
    printf("modified array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}