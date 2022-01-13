#include <stdio.h>

int main(void)
{
    int i = 1;

    do {
        printf("hi\n");
        continue;
        --i;
    } while (i);
}