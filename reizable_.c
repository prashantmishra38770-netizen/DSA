#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr=(int*)malloc(sizeof(int));
    int n=0,i;
    
    int p;
    int*temp=ptr;
    
    while(1)
    {
        printf("enter students marks:");
        scanf("%d",(ptr+n));
        n++;
        printf("more students aviable press 1:");
        scanf("%d",&p);
        if(p!=1)
        {
            break;
        }
        
        ptr=(int*)realloc(ptr,(n+1)*sizeof(int));
        temp=ptr;
        for(i=0;i<=n;i++){
            printf("%d",ptr);
            ptr++;
            
        }
        ptr=temp;

    }
    printf("all array elements are:");
    for(i=0;i<n;i++)

    {
        printf("%d",*ptr);
        ptr++;
        
    }
    
    ptr=temp; 
    int sum=0;

    printf("sum of marks:");
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        
        ptr++;
    }
    printf("%d",sum);
    







}