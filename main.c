#include <stdio.h>
#include "student.c"
#include "file_handler.c"
#include "search_sort.c"

int main() {
    int choice;
    load_from_file();
    while(1) {
        printf("\n--- Student Records ---\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search by Roll number\n");
        printf("4. Sort by cgpa\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addstudent();
                break;
            case 2: 
                displayall();
                break;
            case 6:
                printf("Thank you!\n");  
                save_to_file();
                return 0; 
            case 3:
                search_by_roll();
                break;
            case 4:
                sort_by_cgpa();
                break;
            case 5:
                delete_student();
                break;
            default: 
                printf("Invalid choice!\n");
        }
    }
    return 0;
}