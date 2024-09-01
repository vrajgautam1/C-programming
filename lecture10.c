#include<stdio.h>

struct student
{
 int stu_id;
 char stu_name[20];
 int stu_age;
 char stu_course[20];
 char stu_city[20];
 int stu_standard;
 char stu_school[20];
};

void main(){
    struct student s1;
    struct student s2;

    printf("Student 1 details\n");
    
    printf("Enter Student id: ");
    scanf("%d",&s1.stu_id);

    printf("Enter Student name: ");
    scanf("%s",&s1.stu_name);

    printf("Enter Student Age: ");
    scanf("%d",&s1.stu_age);

    printf("Enter Student course: ");
    scanf("%s",&s1.stu_course);

    printf("Enter Student city: ");
    scanf("%s",&s1.stu_city);

    printf("Enter Student Standard: ");
    scanf("%d",&s1.stu_standard);

    printf("Enter Student school: ");
    scanf("%s",&s1.stu_school);

    printf("\nStudent 1 details\n\n");

    printf("%d\n",s1.stu_id);
    printf("%s\n",s1.stu_name);
    printf("%d\n",s1.stu_age);
    printf("%s\n",s1.stu_course);
    printf("%s\n",s1.stu_city);
    printf("%d\n",s1.stu_standard);
    printf("%s\n",s1.stu_school);

}