#include <stdio.h>

void larger_of(double * num1, double * num2);

// Driver
int main(void)
{  
    double num1 = 5, num2 = 50;

    printf("%.2f %.2f\n", num1, num2);
    larger_of(&num1, &num2);
    printf("%.2f %.2f\n", num1, num2);

    return 0;
}

void larger_of(double * num1, double * num2)
{
    if (*num1 < *num2)
    {
        *num1 = *num2;
    }
    else
    {
        *num2 = *num1;
    }
}