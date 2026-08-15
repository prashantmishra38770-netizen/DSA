#include <stdio.h>
struct student {
    int rollno;
    char name[20];
    float percentage;
    char grade;
    char section;


};
void main(){
    struct student s[5];
    int i;
    for(i=0;i<5;i++)

    {
        printf("enter roll number for student %d:", i + 1);
        scanf("%d", &s[i].rollno);
        printf("enter name for student %d:", i + 1);
        scanf("%s", s[i].name);
        printf("enter percentage for student %d:", i + 1);
        scanf("%f", &s[i].percentage);
        printf("enter grade for student %d:", i + 1);
        scanf(" %c", &s[i].grade);
        printf("enter section for student %d:", i + 1);
        scanf(" %c", &s[i].section);

        for(i=0;i<5;i++)
        {
            printf("student %d:\n", i + 1);
            printf("roll number: %d\n", s[i].rollno);
            printf("name: %s\n", s[i].name);
            printf("percentage: %.2f\n", s[i].percentage);
            printf("grade: %c\n", s[i].grade);
            printf("section: %c\n", s[i].section);
            
        }







    }
    


}
