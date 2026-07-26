#include <stdio.h>
int main() {
    int i;
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\narray elements are:");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("\npositive elements are:%d",arr[i]);

        }
        else if(arr[i]<0)
        {
            printf("\nnegative array elements are:%d",arr[i]);
        }
    }

    
    return 0;
}