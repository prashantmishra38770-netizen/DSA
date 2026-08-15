#include <stdio.h>
int main(){
    int a=12;
    int *ptr=&a;
    *ptr=90;
    printf("%d", a);
    return 0;
    
}