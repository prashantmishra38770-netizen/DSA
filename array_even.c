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
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\neven elements are:");
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            printf("odd elements are:%d ",arr[i]);
        }
    }
    return 0;
}