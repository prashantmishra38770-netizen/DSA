#include<stdio.h>
int arr[100];
int n=0;
int num=0;
void createarray(){
    int i;
    if(n==0)
    {printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    }
    else
    {
        printf("array is already created");
    }

}
void display(){
    int i;
    
    if(n>0)
    {
         printf("array elements are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }


    }
    else
    {
        printf("first create the array then display the elements:");
    }
    }
    void update(){
        if(n>0)
        {
            int pos;
        printf("Enter the position to update:");
        scanf("%d",&pos);
        if(pos>0 && pos<n)
        {
            int value;
            printf("Enter the new value:");
            scanf("%d",&value);
            arr[pos]=value;
        }
        else
        {
            printf("invalid position:");
        }
    }
    else
    {

        printf("first create the array then update the elements:");
    }
    }
    void insert(int arr[],int n){
        int pos;
        printf("Enter the position to insert:");
        scanf("%d",&pos);
        if(pos >= 0 && pos <= n) {
            int value;
            printf("Enter the value to insert:");
            scanf("%d",&value);
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i-1];
            }
            arr[pos] = value;
            n++;
        } else {
            printf("Invalid position!");
        }
    }

int main(){
    while(1){
        printf("choose the operations to perform:");
        printf("1.create array");
        printf("2.display elements:");
        printf("3.update array elements:");
        printf("4.insert elements:");
        printf("5.delete elements:");
        printf("6.exit");
        printf("enter your choice:");
        scanf("%d",&num);
        switch(num){
            case 1:
            createarray();
            break;
            case 2:
            display();
            break;
            case 3:
            update();
            break;
            case 4:
            insert(arr, n);
            break;
        
            

            

        }

    }
    
    
}

