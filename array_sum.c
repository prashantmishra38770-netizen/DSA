#include <stdio.h>

int main() {
    
  
  int i;
  int n;
  printf("enter array size:");
  scanf("%d",&n);
  int arr[n];
  
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
  int sum=0;
  for (i=0;i<n;i++)
  {
    sum=sum+arr[i];


  }
  printf("sum of array element are=%d",sum);

    return 0;
}