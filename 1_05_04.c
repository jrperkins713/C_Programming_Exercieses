#include <stdio.h>

#define IN  1
#define OUT 0
main()
{
    //Exercise 12
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar()) != EOF){
        if (c == ' ' || c == '\n'||c == '\t')
            state = OUT;
        else{
            if (state == OUT){
                state = IN;
                printf("\n");
            }
            if (state == IN){
                putchar(c);
            }
        }
        
    }
    printf("%d %d %d\n", nl, nw, nc);
}
