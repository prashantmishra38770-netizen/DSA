#include <stdio.h>
int main(){
    int a=12;
    int *ptr=&a;
    printf("address of a =%d",&a);
    printf("value of a =%d",a);
    printf("address of a =%d",ptr);
    printf("value of a =%d",*ptr);
    printf("address of ptr =%d",&ptr);
    


}