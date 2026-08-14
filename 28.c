#include <stdio.h>
#include <string.h>
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
void setstudent(struct student *s, char name[20], int rollno, float percentage, char grade, char section) {


    strcpy((*s).name,name);
    (*s).rollno=rollno;
    (*s).percentage=percentage;
    (*s).grade=grade;
    (*s).section=section;


    
}
void main(){
    struct student s1,s2,s3;
    printf("Enter name for student 1: ");
    scanf("%s", s1.name);
    printf("Enter roll number for student 1: ");
    scanf("%d", &s1.rollno);
    printf("Enter percentage for student 1: ");
    scanf("%f", &s1.percentage);
    printf("Enter grade for student 1: ");
    scanf(" %c", &s1.grade);
    printf("Enter section for student 1: ");
    scanf(" %c", &s1.section);

    displaystudent(s1);
    
    displaystudent(s2);
    displaystudent(s3);
    

}

