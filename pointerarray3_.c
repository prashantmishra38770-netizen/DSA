#include <stdio.h>
int main(){
    int arr[5];
    int*ptr=arr;
    printf("Enter elements of array:");
    int i;
    for(i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;

    }
    printf("Elements of array are:");
    ptr=arr;
    for(i=0;i<5;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    int sum=0;
    ptr=arr;
    for(i=0;i<5;i++){
        sum=sum+*ptr;
        ptr++;

    }
    printf("Sum of array elements is: %d",sum);
    ptr=arr;
    for(i=0;i<5;i++){
        if(*ptr%2==0){
            printf("%d is even number",*ptr);
            ptr++;
        }
        else{
            printf("%d is odd number",*ptr);
            ptr++;
        }
    }


}