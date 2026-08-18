
struct emp{
    int id;
    float salary;


};
void main(){
    struct emp e1;
    struct emp*ptr;
    ptr=&e1;
    (*ptr).id=101;
    (*ptr).salary=1200;
    printf("details of employee:");
    printf("id=%d",(*ptr).id);
    printf("salary=%0.f",(*ptr).salary);
    

}
