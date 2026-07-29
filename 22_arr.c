#include <stdio.h>
void cube() {
    int a;
    printf("Enter a number to find cube:");
    scanf("%d",&a);
    int cube;
    cube=a*a*a;
    printf("cube of  a is %d",cube);
}
void main(){
    cube();

}