#include <stdio.h>

int main (void)
{
    
    enum days {sun, mon, tues, wed, thurs, fri, sat};

    switch (1)
    {
        case thurs: 
            printf("no no no, this should not be printed\n"); 
            break;
        case wed + 'l': 
            printf("nope\n"); 
            break;
        default:    // default is optional
            printf("default is optional\n");
            break;
        case mon:   // cases must be distinct: what happens if case is after default?
            printf("yes!\n");
            
    }

    int i = 0;

    while (-8 && getchar() != EOF)
        printf("%d\n",++i);

    printf("Congrats, you exited while!\n");

    return 0;
}