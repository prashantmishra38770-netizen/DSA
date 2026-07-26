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
  int evenarr[n], oddarr[n];
  int evenIndex=0, oddIndex=0;

  
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
    

    printf("even element are=%d",evenarr[i]);
    for(i=0;i<evenIndex;i++)
    {
        printf("evenarr element are=%d",evenarr[i]);
    }
    printf("odd element are=%d",oddarr[i]);
    for(i=0;i<oddIndex;i++)
    {
        printf("oddarr element are=%d",oddarr[i]);
    }
  }






