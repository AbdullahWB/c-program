#include <stdio.h>
#include <string.h>

struct Student
{
    long int rollNo;
    int age;
    char name[50];
    int totalMarks;
};

int main()
{

    struct Student s1;
    // accessing members of the struct
    s1.rollNo = 1232234643;
    s1.age = 10;
    char s[] = "Jonathan";
    strcpy(s1.name, s);
    s1.totalMarks = 450;

    printf("RollNumber: %d \nName: %s \nTotal Marks: %d", s1.rollNo, s1.name, s1.totalMarks);

    return 0;
}