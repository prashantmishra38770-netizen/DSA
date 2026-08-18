
struct emp{
    int id;
    float salary;


};
void main(){
    struct emp employs[3];
    employs[0].id=101;
    employs[0].salary=1200;

    employs[1].id=102;
    employs[1].salary=14000;
    employs[2].id=103;
    employs[2].salary=17000;
    int i;
    for(i=0;i<3;i++)
    {
        printf("employ info");
        printf("details of employee:");
        printf("id=%d",employs[i].id);
        printf("salary=%0.f",employs[i].salary);
    

    }
     


}