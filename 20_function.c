
#include <stdio.h>
void addition(){
    int a,b ,c;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    c=a+b;
    printf("Addition of a and b is %d",c);
}



void main() {
    int i;
    for(i=0;i<5;i++)
    {
        addition();
    }

}