#include <stdio.h>

int main(void)
{
    int lower, upper, sum;

    printf("Enter the lower and the upper integer limits:");
    scanf("%d", &lower);
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++){
        sum += i * i;
    }

    printf("The sums of the squares from %d to %d is %d.", lower*lower, upper*upper, sum);

    return 0;
}