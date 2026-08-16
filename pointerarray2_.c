#include <stdio.h>
int main(){
    int arr[5];
    int*ptr=arr;
    printf("Enter elements of array:");
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    printf("Elements of array are:");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    int sum=0;
    ptr=arr;
    for(i=0;i<5;i++){
        sum=sum+*ptr;

    }
    printf("Sum of array elements is: %d",sum);
    return 0;
    
}