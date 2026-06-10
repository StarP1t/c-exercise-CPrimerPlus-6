#include <stdio.h>
#define COL_LENGTH 20

void clear_input_buffer(void);

int main(void)
{
    float num1, num2;
    int choice, oper;

    while (1)
    {
        // 初始化
        start:
        oper = -1;

        // 菜单显示
        printf("Enter the operation of your choice:\n");
        printf("%-*s%-*s\n", COL_LENGTH, "a.add", COL_LENGTH, "s.subtract");
        printf("%-*s%-*s\n", COL_LENGTH, "m.multiply", COL_LENGTH, "d.divide");
        printf("q.quit\n");

        // 符号输入处理
        step1:
        choice = getchar();
        clear_input_buffer();
        switch (choice)
        {
            case 'a': oper = 0; goto step2;
            case 's': oper = 1; goto step2;
            case 'm': oper = 2; goto step2;
            case 'd': oper = 3; goto step2;
            case 'q': printf("Bye."); getchar(); return 0;
            case '\n': 
                    printf("Please enter a choice: ");
                    goto step1;
            default: 
                    printf("Only accept the given choices.\n");
                    goto step1;
        } 

        // 获取数字
        step2:
        printf("Enter the first number: ");
        while (scanf("%f", &num1) != 1)
        {
            printf("Please enter a correct number1: ");
            clear_input_buffer();
        }
        clear_input_buffer();
        
        printf("Enter the second number: ");
        int result = scanf("%f", &num2);
        clear_input_buffer();
        while (result != 1 || (oper == 3 && num2 == 0))
        {
            if (result != 1)
                printf("Please enter a correct number2: ");
            else if (oper == 3 && num2 == 0)
            {
                printf("Invalid input with a division by 0.\n");
                printf("Please enter a correct number2: ");
            }
            result = scanf("%f", &num2);
            clear_input_buffer();
        }

        // 数字运算
        step3:
        switch (oper)
        {
        case 0:
            printf("%g + %g = %g\n", num1, num2, num1 + num2);
            break;
        case 1:
            printf("%g - %g = %g\n", num1, num2, num1 - num2);
            break;
        case 2:
            printf("%g * %g = %g\n", num1, num2, num1 * num2);
            break;
        case 3:
            printf("%g / %g = %g\n", num1, num2, num1 / num2);
            break;        
        default:
            printf("Operator value error. Restarting...\n");
            goto start;
        }
        printf("\n");
    }
}

void clear_input_buffer(void) 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}