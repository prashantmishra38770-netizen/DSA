#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int*arr;

};
int isEmpty(struct stack*s1){
    if(s1->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack*s1){
    if(s1->top==s1->size-1){
        return 1;
    }
    else{
        return 0;
    }    
}
void push(struct stack*s1,int value){
    if(isFull(s1)){
        printf("Stack overflow\n");
    }
    else{
        s1->top++;
        s1->arr[s1->top]=value;
        printf("%d pushed to stack\n",value);
    }
}
int main(){
     struct stack*s1;
     s1=(struct stack*)malloc(sizeof(struct stack));
     s1->top=-1;
     s1->size=5;
     s1->arr=(int*)malloc(s1->size*sizeof(int));
     printf("%d\n",isEmpty(s1));



}