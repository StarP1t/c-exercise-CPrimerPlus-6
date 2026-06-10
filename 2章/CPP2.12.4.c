#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For ... fellow!\n");
    printf("For ... fellow!\n");
    printf("For ... fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!");
}