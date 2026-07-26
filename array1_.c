#include <stdio.h>
int main() {
    int i;
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];

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
        if(arr[i]%4==0)
        {
            printf("\n array elements are divisible by 4:%d",arr[i]);

        }
        else
        {
            printf("\n array elements are not divisible by 4:%d",arr[i]);
        }
    }
    
    return 0;
}