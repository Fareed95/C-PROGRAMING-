#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int empNo;
    char empName[50];
    int experience;
    float salary;
};

int main() {
    // Declare an array of Employee structure to store information of 5 employees
    struct Employee employees[5];

    // Read information of 5 employees
    for(int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee No: ");
        scanf("%d", &employees[i].empNo);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        printf("Experience (in years): ");
        scanf("%d", &employees[i].experience);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee information with 5 years or more experience and salary less than Rs. 10,000
    printf("\nEmployees with 5 years or more experience and salary less than Rs. 10,000:\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Emp No\tEmp Name\tExperience\tSalary\n");
    printf("-------------------------------------------------------------------------\n");
    for(int i = 0; i < 5; i++) {
        if(employees[i].experience >= 5 && employees[i].salary < 10000) {
            printf("%d\t%s\t\t%d\t\t%.2f\n", employees[i].empNo, employees[i].empName, employees[i].experience, employees[i].salary);
        }
    }

    return 0;
}
