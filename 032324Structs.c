/*Define a structure Student with the following fields: name (string), 
roll_number (integer), and marks (float). Then declare a variable 
student1 of type Student and initialize it with some values.*/

#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll_number;
    float marks;
} student1;

int main()
{
    struct Student student;
    strcpy(student1.name,"Kongphop");
    student1.roll_number = 11560;
    student1.marks = 98.76;

    printf("%s %d %.2f",student1.name,student1.roll_number,student1.marks);
}
