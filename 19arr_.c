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
    int c=0;
    int j;
    for(i=0;i<n;i++)
    {
        if(arr[i] !=-1)
        {
           
            for(j=i+1;j<n;j++)
            {

           
              if(arr[i]==arr[j])
                {
                    arr[j]=-1;
                    c++;
                }
            }
        }
    }
    printf("\nNumber of duplicate elements: %d", c);
}