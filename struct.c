#include <stdio.h>
#include <string.h>
/*
student:
    -name(string)
    -id(string)
    -age(int)
    -grade(int array)
*/

/*
struct definition
struct Student
{
    char name[50];
    char id[10];
    int age;
    int grade[5];
};


*/



typedef struct 
{
    char name[50];
    char id[10];
    int age;
    int grade[5];
} Student;


typedef struct 
{
    int x;
    int y;
} Point;




void print_student(Student student);


int main()
{
    Student kevin;
    kevin.age = 40;
    strcpy(kevin.name,"Kevin");
    strcpy(kevin.id,"00123123");
    kevin.grade[0] = 1;
    kevin.grade[1] = 2;
    kevin.grade[2] = 3;
    kevin.grade[3] = 4;
    kevin.grade[4] = 5;

    print_student(kevin);

    Point p1 = {5, 10}; // assign variable to struct in such way
    Point p2 = {.x = 6, .y = 11};
    printf("p1.x: %d\n", p1.x);
    printf("p1.y: %d\n", p1.y);
    printf("p2.x: %d\n", p2.x);
    printf("p2.y: %d\n", p2.y);

    return 0;

}
 

 void print_student(Student student)
 {

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("ID: %s\n", student.id);
    printf("Grade[0]: %d\n", student.grade[0]);

    for (int i = 0; i < 5; i++)
        printf("%d ", student.grade[i]);
    
    printf("\n");
 }