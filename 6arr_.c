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
  printf("/n copy of array elment are:");
  for(i=0;i<n;i++)
  {
    copyarr[i]=arr[i]*arr[i];

  }
  for(i=0;i<n;i++)
  {
    printf("%d",copyarr[i]);
  }

}