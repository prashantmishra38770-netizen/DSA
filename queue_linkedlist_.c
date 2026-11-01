#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
struct node*front=NULL,*rear=NULL;
int isEmpty(){
    if(front==NULL)
    return 1;
    else
    return 0;

}

void enqueue(int num){
    struct node*new=(struct node*)malloc(sizeof(struct node));

    new->data=num;
    new->next=NULL;
    if(isEmpty()){
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
int dequeue(){
    if(isEmpty())
    {
        printf("Queue is underflow\n");
        return -1;
    }
    else{
        struct node*temp=front;
        int num=front->data;
        front=front->next;
        free(temp);
        return num;

    }
}

void display(){
    if(isEmpty()){
        
        printf("Queue is empty\n");
    }
    else{
        struct node*temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");

    }



}

void main(){
    enqueue(10);
    enqueue(20);
    display();
}