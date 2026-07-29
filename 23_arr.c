#include <stdio.h>
void addition(int a,int b){
    int c;
    c=a+b;
    printf("Addition of a and b is %d",c);
}
void cube(int a){
    int cube;
    cube=a*a*a;
    printf("cube of a is %d",cube);
}
void main(){
    addition(12,5);
    addition(123,2345);
    cube(5);
    cube(10);
    
}