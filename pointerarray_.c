#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int*ptr=arr;
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d" ,*ptr);
        ptr++;
    }
    int sum=0;
    ptr=arr;  
    for(i=0;i<5;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    printf("Sum: %d", sum); 
    
}