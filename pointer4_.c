#include <stdio.h>
#include <stdlib.h>
int main(){
    
    
    int n;
    printf("enter size of array elements:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    int *temp=ptr;

   
    if(ptr==NULL){
        printf("MEMEORY NOT ALLOCATED");

    }
    else{
        
        int i;
        for(i=0;i<n;i++){
            scanf("%d",ptr);
            ptr++;
        }
        printf("Elements of array are:");
        ptr=temp;
        for(i=0;i<n;i++){
            printf("%d",*ptr);
            ptr++;

        }
       
        int sum=0;
        ptr=temp;
        for(i=0;i<n;i++){
            sum=sum+*ptr;
            ptr++;

        }
        printf("sum of array elements is:%d",sum);
        free(ptr);
    }

}

