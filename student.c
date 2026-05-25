#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int roll;
    char name[30];
    char dept[20];
    float cgpa;
} Student;

Student students[MAX];
int count=0;
//add student
void addstudent() {
    Student s;
    
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);
    
    printf("Enter Name: ");
    scanf(" %[^\n]",&s.name);
    
    printf("Enter Department: ");
    scanf(" %[^\n]",&s.dept);
    
    printf("Enter CGPA: ");
    scanf("%f",&s.cgpa);
    
    students[count]=s;
    count++;
    
    printf("Student added successfully!\n");
}
// display
void displayall(){
    if(count==0){
        printf("no students found!\n");
        return;
    }
    printf("\n%-10s %-30s %-20s %-5s\n", "Roll No", "Name", "Dept", "CGPA");
    printf("--------------------------------------------------------------------\n");
    for(int i=0;i<count;i++){
    printf("%-10d %-30s %-20s %.2f\n",students[i].roll,students[i].name,students[i].dept,students[i].cgpa);
    }
}
//deleting a data
void delete_student(){
    int roll,pos=-1;
    printf("Enter Roll number:");
    scanf("%d",&roll);
    for(int i=0;i<count;i++){
        if(roll==students[i].roll){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        printf("student not found!\n");
        return;
    }
    for(int i=pos;i<count-1;i++){
        students[i]=students[i+1];
    }
    count--;
}
#endif