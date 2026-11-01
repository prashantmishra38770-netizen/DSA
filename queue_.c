#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
    
};
int isEmpty(struct queue*q1){
    if(q1->front==-1 && q1->rear==-1 )
    return 1;
    else
    return 0;
}
int isFull(struct queue*q1){
    if(q1->rear==q1->size-1)
    return 1;
    else
    return 0;

}
void enqueue(struct queue*q1,int num){
    if(isFull(q1))
    printf("Queue is full\n");
    else if(isEmpty(q1)){
        q1->front=q1->rear=0;
        q1->arr[q1->rear]=num;
    }
    else{
        q1->rear++;
        q1->arr[q1->rear]=num;
    }
}
int display(struct queue*q1){
    int i;
    if(isEmpty(q1))
    printf("Queue is empty\n");
    else{
        for(i=q1->front;i<=q1->rear;i++)
        printf("%d ",q1->arr[i]);
    }
}
void main(){
    struct queue*q1=(struct queue*)malloc(sizeof(struct queue));
    q1->size=5;
    q1->front=q1->rear=-1;
    q1->arr=(int*)malloc(q1->size*sizeof(int));
    enqueue(q1,10);
    enqueue(q1,20);
    enqueue(q1,30);
    enqueue(q1,40);
    display(q1); 
    free(q1->arr);
    free(q1);
}
