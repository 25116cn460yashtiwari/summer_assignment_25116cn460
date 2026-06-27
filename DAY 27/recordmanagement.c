#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0, choice, i, roll;
    char searchName[50];

    printf("Welcome to Student Record Management System!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &students[count].rollNo);
                printf("Enter Name: ");
                scanf(" %[^\n]", students[count].name); // read string with spaces
                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);
                count++;
                printf("Record added successfully!\n");
                break;

            case 2:
                printf("\nAll Student Records:\n");
                for(i = 0; i < count; i++) {
                    printf("Roll No: %d, Name: %s, Marks: %.2f\n",
                           students[i].rollNo, students[i].name, students[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                for(i = 0; i < count; i++) {
                    if(students[i].rollNo == roll) {
                        printf("Record Found: Roll No: %d, Name: %s, Marks: %.2f\n",
                               students[i].rollNo, students[i].name, students[i].marks);
                        break;
                    }
                }
                if(i == count) {
                    printf("No record found with Roll No %d.\n", roll);
                }
                break;

            case 4:
                printf("Enter Name to search: ");
                scanf(" %[^\n]", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(students[i].name, searchName) == 0) {
                        printf("Record Found: Roll No: %d, Name: %s, Marks: %.2f\n",
                               students[i].rollNo, students[i].name, students[i].marks);
                        break;
                    }
                }
                if(i == count) {
                    printf("No record found with Name %s.\n", searchName);
                }
                break;

            case 5:
                printf("Exiting Student Record Management System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}
