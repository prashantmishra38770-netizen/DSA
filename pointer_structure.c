#include <stdio.h>
struct emp{
    int id;
    float salary;


};
void main(){
    struct emp e1;
    e1.id=101;
    e1.salary=1200;
    printf("details of employee:");
    printf("id=%d",e1.id);
    printf("salary=%0.f",e1.salary);
    

}
