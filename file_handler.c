#include <stdio.h>
#include "student.c"

// saving data to file
void save_to_file(){
    FILE *file=fopen("students.dat","wb");
    if(file==NULL){
        printf("error!\n");
        return;
    }
    for(int i=0;i<count;i++)
        fwrite(&students[i],sizeof(Student),1,file);
    
    fclose(file);
}
//loading data from file
void load_from_file(){
    FILE *file=fopen("students.dat","rb");
    if(file==NULL){
        return;
    }
    while(fread(&students[count],sizeof(Student),1,file)==1){
        count++;
    }
    fclose(file);
}