#include <stdio.h>
int main() {
    int i;
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int flag=0;
    int num;
    printf("\nenter number to search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            flag=1;
            break;
            
        }
    }
    if(flag==1)
    {
        printf("\nnumber is found in array");
    }
    else
    {
        printf("\nnumber is not found in array");
    }
}

    