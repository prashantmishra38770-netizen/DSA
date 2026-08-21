#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;


};
struct node*head=NULL;
void create_list(){
    if(head==NULL)
    {
        int num;
        struct node *new,*temp;
        
        printf("enter a num:");
        scanf("%d",&num);
        head=(struct node*)malloc(sizeof(struct node));
        head->data=num;
        head->next=NULL;
        temp=head; 
        while(1)
        {
            printf("enter 1 if you want to add more element:");
            scanf("%d",&num);
            if(num==1)
            {
                printf("enter a num:");
                scanf("%d",&num);
                new=(struct node*)malloc(sizeof(struct node));
                new->data=num;
                new->next=NULL;
                temp->next=new;
                temp=new;
                
               



            }
            else{
                break;
            }
        }



    }
    else{
        printf("list is already created");
    }
}
void main() 
{
    create_list();
    display_list();

}
