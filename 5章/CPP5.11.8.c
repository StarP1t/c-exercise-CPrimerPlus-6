#include <stdio.h>

int main(void)
{
    int oper1, oper2;

    printf("The program computes moduli.\n");
    printf("Enter a integer to be second operand:");
    scanf("%d", &oper2);
    printf("Enter the first integer operand:");
    scanf("%d", &oper1);

    while (oper1 >= 0)
    {
        printf("%d %% %d = %d\n", oper1, oper2, oper1 % oper2);
        printf("Enter the next first integer operand(<0 to quit):");
        scanf("%d", &oper1);
    }
    printf("Done");

    return 0;
}