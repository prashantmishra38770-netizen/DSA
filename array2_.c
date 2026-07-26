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

        int ce=0,oc=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                ce++;
<<<<<<< HEAD
            }
            else
            {
                oc++;
=======
>>>>>>> abe222ef8cb0435e128358ad802c8d93cf76d8ad
            }
            else 
            {
               oc++; 
            }
                
                

<<<<<<< HEAD
        }
        printf("total number of even elements are:%d",ce);
        printf("total number of odd elements are:%d",oc);
=======
        
        printf("total number of even elements are:%d",ce);
        printf("total number of odd elements are:%d",oc);    

>>>>>>> abe222ef8cb0435e128358ad802c8d93cf76d8ad
        
    

}
