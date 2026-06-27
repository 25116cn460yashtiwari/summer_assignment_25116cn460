#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee employees[100];
    int count = 0, choice, i, searchId;
    char searchName[50];
    float totalSalary = 0;

    printf("Welcome to Salary Management System!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Calculate Total Salary Expense\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &employees[count].id);
                printf("Enter Name: ");
                scanf(" %[^\n]", employees[count].name);
                printf("Enter Department: ");
                scanf(" %[^\n]", employees[count].department);
                printf("Enter Salary: ");
                scanf("%f", &employees[count].salary);
                count++;
                printf("Record added successfully!\n");
                break;

            case 2:
                printf("\nAll Employee Records:\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].department, employees[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                for(i = 0; i < count; i++) {
                    if(employees[i].id == searchId) {
                        printf("Record Found: ID: %d, Name: %s, Department: %s, Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if(i == count) {
                    printf("No record found with ID %d.\n", searchId);
                }
                break;

            case 4:
                printf("Enter Name to search: ");
                scanf(" %[^\n]", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(employees[i].name, searchName) == 0) {
                        printf("Record Found: ID: %d, Name: %s, Department: %s, Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if(i == count) {
                    printf("No record found with Name %s.\n", searchName);
                }
                break;

            case 5:
                totalSalary = 0;
                for(i = 0; i < count; i++) {
                    totalSalary += employees[i].salary;
                }
                printf("Total Salary Expense for all employees: %.2f\n", totalSalary);
                break;

            case 6:
                printf("Exiting Salary Management System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}
