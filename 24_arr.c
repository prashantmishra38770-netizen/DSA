#include <stdio.h>
int multiplication(int a,int b){
    int c;
    c=a*b;
    return c;

}
int cube(int a){
    int res;
    res=a*a*a;

    return res;

}
void main(){
    printf("multiplication of a and b is %d",multiplication(12,50));
    int res=cube(5);
    printf("cube of given num=%d",res);
}