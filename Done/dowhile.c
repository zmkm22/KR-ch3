#include <stdio.h>

int main (void) 

{

    /* do while is executed at least once */

    int y;
    y = 1;

    do {
        printf("%d\n", y);
        ++y;
    } while (y <= 100);     // <= instead of =< so comparison is not mistaken as assignemnt: < shileds =
        
    do {
        printf("say once\n");
        ++y;
    } while (0);  
    
    return 0;

}