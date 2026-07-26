#include <stdio.h>
int main() {
    int i;int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("array element are:");
    for(i=0;i<n;i++)
        { 
             printf("%d ",arr[i]);


        }

        int c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                c++;
            }

        }
        printf("total number of even elements are:%d",c);

        
    

}