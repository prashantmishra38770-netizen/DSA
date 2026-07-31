#include <stdio.h>
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        
    }
}
int max(int arr[],int n){
    int i;
   
    int max =arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
           
        }
    }
    return max;
}
int main(){
    int arr[5]={12,34,5,6,78};
    int arr2[8]={123,456,345,980,342,125,657,9876};

    display(arr,5);
    printf("max element of arr:%d",max(arr,5));
    display(arr2,8);
    printf("max element of arr2:%d",max(arr2,8));
    return 0;

}