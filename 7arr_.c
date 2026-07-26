#include <stdio.h>
int main() {
    
  int i;
  int n;
  printf("enter array size:");
  scanf("%d",&n);
  int arr[n];
  int copyarr[n];
  
  printf("enter array elemnt are:");
  for (i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("array element are:");
  for (i=0;i<n;i++)
  {
      printf("array elemnt are=%d",arr[i]);
  } 

  int max=arr[0];
  for(i=0;i<n;i++)
  {
    if (arr[i]>max)
    {
        max=arr[i];

    }
  }
    printf("\nmax element of array is:%d",max);
 
}