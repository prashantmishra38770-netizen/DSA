#include<stdio.h>
int arr[7]={5,2,8,1,4,7,3};
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<(n-1)-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void main(){
    int arr[7]={5,2,8,1,4,7,3};
    display(arr,7);
    bubbleSort(arr,7);
    display(arr,7);
    
}

