#include <stdio.h>

main()
{   /*exersise 8
    int c, nl, tab, space;

    nl = 0;
    tab = 0;
    space = 0;
    while((c=getchar()) != EOF){
        if(c=='\n')
            nl++;
        if(c==' ')
            space++;
        if(c=='\t')
            tab++;
    }
    printf("%d\t%d\t%d\n", nl,tab,space);
    */
    /* Exercise 9
    int c, spaces;
    spaces = 0;

    while((c=getchar()) != EOF){
        if(c==' ')
            spaces++;
        else
            spaces = 0;
        if(spaces<=1)
            printf("%c",c);
        
    }*/

    int c;
    while((c=getchar()) != EOF){
        if(c=='\n')
            printf("\\n");
        else if(c=='\b')
            printf("\\b");
        else if(c=='\t')
            printf("\\t");
        else
            putchar(c);
        
    }
}
