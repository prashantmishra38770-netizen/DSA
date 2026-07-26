#include <stdio.h>

int main() {
   int i;
   int n;
   
   printf("enter array size:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       
   }
   printf("array elements are:");
   for(i=0;i<n;i++)
   {
       printf("%d",arr[i]);
       
   }
   int evenarr[n],oddarr[n];
   int evenIndex=0,oddIndex=0;
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           evenarr[evenIndex]=arr[i];
           evenIndex++;
       }
       else
       {
           oddarr[oddIndex]=arr[i];
           oddIndex++;
           
       }
   }
   printf("even elemnts are:");
   for(i=0;i<evenIndex;i++)
   {
       printf("even arr element=%d",evenarr[i]);
   }
   for(i=0;i<oddIndex;i++)
   {
       printf("odd arr element=%d",oddarr[i]);
   }
   
   
   

    return 0;
}