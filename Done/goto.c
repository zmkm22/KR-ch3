#include <stdio.h>

/* can we go to a place above goto? how does compiler link goto to tag? */

int main(void){

    int i = 0;

    if (i > 1)
    {other_side_blackhole:
        printf("tunneled to the other side of the universe, exit %d\n", i);
        return 0;
    }
        

    for (i = 1; ; )
        if (i++ == 10){
            printf("go\n");
            goto other_side_blackhole;
        }
}