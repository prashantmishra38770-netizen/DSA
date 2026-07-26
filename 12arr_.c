#include <stdio.h>

int main() {
    int i, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    int num;
    int j,c,pc=0,npc=0;
    for(i=0;i<n;i++)
    {
         num=arr[i];
         c=0;
    
    for(j=1;j<=num;j++)
    {
        if(num%j==0)
        {
            c++;
        }
    }
   
    if(c==2)
    {
        pc++;
    }
    else
    {
        npc++;
    }
    }
       
    printf("Number of prime numbers: %d\n", pc);
    printf("Number of non-prime numbers: %d\n", npc);
    return 0;
}