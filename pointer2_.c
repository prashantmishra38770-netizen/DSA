#include <stdio.h>
int main(){
    int a=123;
    int *ptr=&a;
    printf("address of a =%d",&a);
    printf("value of a =%d",a);
    printf("address of ptr =%d",ptr);
    ptr++;
    printf("address of a =%d",&a);
    printf("address of ptr =%d",ptr);
     
    return 0;

}