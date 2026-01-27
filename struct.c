#include<stdio.h>
    struct student
    {
        char name[50];
        int age;
        float  marks;
    };
    int main()
    {
        struct student s1,s2;
        float average;
        printf("Enter the student1 details(age,marks and name)");
        scanf("%d %f %s ",&s1.age,&s1.marks,s1.name);
        printf("Enter the student2 details(age,marks and name)");
        scanf("%d %f %s ",&s2.age,&s2.marks,s2.name);

        printf("STUDENT RECORDS");

        printf("1.name%s age %d marks %.2f",s1.name,s1.age,s1.marks);
        printf("2.name%s age %d marks %.2f",s2.name,s2.age,s2.marks);

        float average = (s1.marks+s2.marks)/2;
        printf("The average marks%f",average);
        return 0;
    }