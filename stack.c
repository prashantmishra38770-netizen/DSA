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
       
    }

}
void display(struct stack*s1){
    int i;
    for(i=s1->top;i>=0;i--){
        printf("%d\n",s1->arr[i]);
    }
}
void pop(struct stack*s1){
    if(isEmpty(s1)){
        printf("Stack underflow\n");
    }
    else{
        int val=s1->arr[s1->top];
        s1->top--;
       
    }
}
int main(){
     struct stack*s1;
     s1=(struct stack*)malloc(sizeof(struct stack));
     s1->top=-1;
     s1->size=5;
     s1->arr=(int*)malloc(s1->size*sizeof(int));
    // printf("%d\n",isFull(s1));
     push(s1,34);
     push(s1,56);
     push(s1,78);
     push(s1,90);
     push(s1,39);
     display(s1);
     printf("Pop starts:\n");
     pop(s1);
     display(s1);



}