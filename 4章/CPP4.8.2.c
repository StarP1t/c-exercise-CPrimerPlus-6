#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    int len;

    printf("Input your name:");
    scanf("%s", name);
    len = strlen(name);
    printf("%20s\n", name);
    printf("%-20s\n", name);
    printf("%*s\n", len + 3, name);

    return 0; 
}