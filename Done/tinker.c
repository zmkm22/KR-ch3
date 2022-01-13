#include <stdio.h>

int main(void)
{
    int a = 20;
    for (int i = 19;;) // the scope of i is the for-loop
        {
            break;  // if we return here, printf does not execute
        }
    printf("%d\n",a);

    /*
    int i = 0;

    for (;;)
    {
        for (;;)
            break;  // break exits inner most loop
        printf("%d\n", ++i);
    }
    */
}