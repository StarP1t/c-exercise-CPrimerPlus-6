#include <stdio.h>
#define NUM 6 

int main(void)
{
    int ch, count;

    for (count = 0; count < NUM; count++){
        for (ch = 'F'; ch >= 'F' - count; ch--){
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}