#include <stdio.h>
#include "student.c"

void search_by_roll(){
    int roll,found=0;
    printf("Enter roll number:");
    scanf("%d",&roll);
    //traversing 
    for(int i=0;i<count;i++){
        if(roll==students[i].roll){
            printf("\n%-10s %-30s %-20s %-5s\n", "Roll No", "Name", "Dept", "CGPA");
            printf("--------------------------------------------------------------------\n");
    
            printf("%-10d %-30s %-20s %.2f\n",students[i].roll,students[i].name,students[i].dept,students[i].cgpa);
            found=1;
            return;
        }
    }
    if(!found)
        printf("Student data not found!\n");
}
//sorting by cgpa
void sort_by_cgpa(){
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(students[j].cgpa<students[j+1].cgpa){
                Student temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    printf("sorted by cgpa!\n");
    displayall();
}