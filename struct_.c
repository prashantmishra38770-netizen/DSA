#include<stdio.h>
#include<string.h>

struct student{
    char name[30];
    int rollno;
    float percentage;
    char grade;
    char section;

};
void displaystudent(struct student s ){
     printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollno);
    printf("Percentage: %.2f\n", s.percentage);
    printf("Grade: %c\n", s.grade);
    printf("Section: %c\n", s.section);


}
int main(){
    struct student s1,s2,s3;
    strcpy (s1.name,"PRASHANT");
    s1.rollno=55;
    s1.percentage=85.5;
    s1.grade='A';
    s1.section='C';
    printf("Student 1:\n");
    displaystudent(s1);
    strcpy(s2.name,"pranav");
    s2.rollno=53;
    s2.percentage=75.5;
    s2.grade='B';
    s2.section='A';
    printf("\nStudent 2:\n");
    displaystudent(s2);
    printf("section:%c\n",s2.section);
  
    



}
