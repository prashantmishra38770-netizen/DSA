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
    setstudent(&s1,"PRASHANT",55,85.5,'A','C');
    setstudent(&s2,"pranav",53,75.5,'B','A');
    setstudent(&s3,"suresh",54,90.0,'A','B');

    displaystudent(s1);
    
    displaystudent(s2);
    displaystudent(s3);
    

}
