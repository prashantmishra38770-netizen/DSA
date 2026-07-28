#include <stdio.h>
void subtraction();
int i;
void main() {
    for(i=0;i<5;i++)
    {
        subtraction();
    }
}
void subtraction() {
    int a,b,c;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    c=a-b;
    printf("subtraction of a and b is %d",c);


}