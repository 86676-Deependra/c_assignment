#include <stdio.h>
#include <string.h>

struct emp {
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

void emp_init(struct emp *e, const char *first_name, const char *last_name, double salary) {
    strcpy(e->first_name, first_name);
    strcpy(e->last_name, last_name);
    e->monthly_salary = salary > 0 ? salary : 0.0;
}

void set_salary(struct emp *e, double salary) {
    if (salary > 0) {
        e->monthly_salary = salary;
    } else {
        printf("Salary must be positive.\n");
    }
}

void emp_display(struct emp *e) {
    printf("Employee: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: %.2lf\n", e->monthly_salary);
    printf("Yearly Salary: %.2lf\n", e->monthly_salary * 12);
}

int main() {

    struct emp emp1, emp2;

    emp_init(&emp1, "NISHIKANT", "REDDY", 5000.0);
    emp_init(&emp2, "VARSHITHA", "YAGANTI", 6000.0);

    printf("Initial Details:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    set_salary(&emp1, emp1.monthly_salary * 1.10);
    set_salary(&emp2, emp2.monthly_salary * 1.10);

    printf("\nDetails after 10%% raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
