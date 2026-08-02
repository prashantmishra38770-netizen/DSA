#include <stdio.h>
void display(int arr[],int n){
    int i;
    for (i=0;i<n;i++){
       printf("%d",arr[i]);
    }
}
void insert(int arr[],int n){
    int pos;
    printf("enter position:");
    scanf("%d",&pos);
    if(pos<0||pos>=n )
    {
        printf("please choose valid postion");
        return;

    }
    int value;
    printf("enter value");
    scanf("%d",&value);
    int i;
    for(i=n-1;i>pos;i--)
    {
        arr[i]=arr[n-1];
    }
    arr[pos]=value;

}
void main(){
    int arr[5]={1,2,3,4};
    int i;
   
    display(arr,5);
    insert(arr,5);
    printf("arr element :");
    display(arr,5);
}