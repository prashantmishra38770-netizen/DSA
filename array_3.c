#include <stdio.h>
int main() {
    int i;
    int n;
    int square;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("array elemnt are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    for(i=0;i<n;i++)
    {
        square=arr[i]*arr[i];
        printf("\nsquare of array element are:%d",square);
    }

}