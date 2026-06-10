#include <stdio.h>
#define BASE_SALARY_1 8.75
#define BASE_SALARY_2 9.33
#define BASE_SALARY_3 10.00
#define BASE_SALARY_4 11.20
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define EXTRA_TIME_RATE 1.5
#define TAX_LIMIT_1 300.00
#define TAX_LIMIT_2 450.00
#define TIME_LIMIT 40
void clear_input_buffer(void);

int main(void)
{
    float base_salary, salary, tax, taxed_salary, time;
    float tax1 = TAX_LIMIT_1 * TAX_RATE_1;
    float tax2 = (TAX_LIMIT_2 - TAX_LIMIT_1) * TAX_RATE_2;
    int choice;
    
    printf("*********************************\n");
    printf("Enter the number for the choices:\n");
    printf("1)$%.2f/hr\n", BASE_SALARY_1);
    printf("2)$%.2f/hr\n", BASE_SALARY_2);
    printf("3)$%.2f/hr\n", BASE_SALARY_3);
    printf("4)$%.2f/hr\n", BASE_SALARY_4);
    printf("5)Quit\n");
    printf("*********************************\n");

    while (1){
        choice = getchar();
        if (choice == '\n')
            continue;
        else if (choice == '5')
            break;
            
        switch (choice)
        {
        case '1': base_salary = BASE_SALARY_1; break;
        case '2': base_salary = BASE_SALARY_2; break;
        case '3': base_salary = BASE_SALARY_3; break;
        case '4': base_salary = BASE_SALARY_4; break;
        default: printf("Only accept number 1~5.\n"); clear_input_buffer(); continue;
        }

        clear_input_buffer();
        printf("Enter your work time in integer.\n");
        while (scanf("%f", &time)){
            if (time > TIME_LIMIT){
                time = TIME_LIMIT + (time - TIME_LIMIT) * EXTRA_TIME_RATE;
                break;
            }
            else if (time <= TIME_LIMIT && time >= 0)
                break;
            else{
                printf("Please enter a positive work time.\n");
                continue;
            }
        }

        salary = base_salary * (float)time;
        if (salary > TAX_LIMIT_2)
            tax = (salary - TAX_LIMIT_2) * TAX_RATE_1 + tax1 + tax2;
        else if (salary > TAX_LIMIT_1)
            tax = (salary - TAX_LIMIT_1) * TAX_RATE_2 + tax1;
        else
            tax = salary * TAX_RATE_3;
        taxed_salary = salary - tax;
        printf("Your salary is %.2f, tax is %.2f, taxed salary is %.2f.\n",
                salary, tax, taxed_salary);

        printf("Input the next number 1~4 to continue, 5 to quit.\n");
    }
    printf("Quit.");

    return 0;
}

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}