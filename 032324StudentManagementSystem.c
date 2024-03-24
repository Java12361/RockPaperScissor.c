#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;

void addStudent(Student *students, int *count);
void displayStudents(Student *students, int count);
void searchStudent(Student *students, int count, int roll_number);
void saveToFile(Student *students, int count);
void loadFromFile(Student *students, int *count);

int main() {
    Student students[100]; // Array to store up to 100 student records
    int count = 0; // Number of students currently stored
    int choice, roll_number;

    // Load student records from file
    loadFromFile(students, &count);

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        system("clear");

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &roll_number);
                searchStudent(students, count, roll_number);
                break;
            case 4:
                saveToFile(students, count);
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

void addStudent(Student *students, int *count) {
    if(*count>=100){
        printf("Student list is full\n");
        return;
    }

    printf("Student Name : ");
    scanf("%s",students[*count].name);
    printf("Student Roll Number : ");
    scanf("%d",&students[*count].roll_number);
    printf("Student Score : ");
    scanf("%f",&students[*count].marks);
    (*count)++;
}

void displayStudents(Student *students, int count) {
    if (count == 0) {
        printf("No students in the database.\n");
        return;
    }
    for(int i=0;i<count;i++)
    {
        printf("Student name  : %s\n",students[i].name);
        printf("Student roll  : %d\n",students[i].roll_number);
        printf("Student score : %.2f\n",students[i].marks);
    }
}

void searchStudent(Student *students, int count, int roll_number) {
    int flag = 0;
    for(int i=0;i<count;i++)
    {
        if(roll_number == students[i].roll_number)
        {
            printf("Student name  : %s\n",students[i].name);
            printf("Student score : %.2f\n",students[i].marks);
            flag = 1;
            break;
        }
    }
    if (!flag) printf("Student with roll number %d not found.\n", roll_number);
}

void saveToFile(Student *students, int count) {
    FILE *fp;

    fp = fopen("student.txt","w");
    for(int i=0;i<count;i++)
    {
        fprintf(fp,"Student name  : %s\n",students[i].name);
        fprintf(fp,"Student roll  : %d\n",students[i].roll_number);
        fprintf(fp,"Student score : %.2f\n",students[i].marks);
    }
    fclose(fp);
}

void loadFromFile(Student *students, int *count) {
    FILE *fp;

    fp=fopen("student.txt","r");
    if(fp==NULL){
        printf("cannot open \"%s\" for read\n","student.txt");
        return;
    }

    int i=0;
    while(!feof(fp))
    {
        fscanf(fp,"Student name  : %s\n",students[i].name);
        fscanf(fp,"Student roll  : %d\n",&students[i].roll_number);
        fscanf(fp,"Student score : %f\n",&students[i].marks);
        i++;
    }
    *count = *count+i;
}