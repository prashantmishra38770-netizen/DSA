#include <stdio.h>
#include <stdlib.h>
#define size 5
int front=-1;
int rear=-1;
int queue[size];


int isEmpty(){
    if(front==-1 && rear==-1|| front>rear)
        return 1;
    else
        return 0;
}
int isFull(){
    if(rear==size-1)
    {
        return 1;

    }
    return 0;

}
void enqueue(int num){
    if(isFull()){
        printf("Queue is  overflow");

    }
    else{
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
            queue[rear]=num;
        }
        else{
            rear++;
            queue[rear]=num;

        }
    }
    

}
int dequeue(){
    if(isEmpty()){
        printf("Queue is underflow");
        return -1;
    }
    else{
        int num=queue[front];
        front++;
        return num;
    }

}
int peek(){
    if(isEmpty()){
        printf("Queue is underflow");
        return -1;
    }
    else{
        return queue[front];
    }
}
void display(){
    if(isEmpty())
    {
        printf("Queue is empty");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }

}
void main(){
    //printf("%d", isEmpty());
   // printf("%d",isFull());
    enqueue(5);
    enqueue(6);
    enqueue(7);
     display();
    printf("%d elemnt is dequeued\n",dequeue());
    printf("%d elemnt is dequeued\n",dequeue());
    printf("%d elemnt is dequeued\n",dequeue());
    printf("%d elemnt is dequeued\n",dequeue());
    
   

}