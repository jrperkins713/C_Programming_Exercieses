#include <stdio.h>

main()
{
    /* Book Work
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for(i=0;i<10;++i){
        ndigit[i] = 0;
    }

    while((c = getchar())!= EOF){
        if (c >= '0'&& c<='9')
            ++ndigit[c-'0'];
        else if(c==' ' || c=='\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");
    for(i=0;i<10;++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d",nwhite,nother);
    */
    
    /*Exercise 13 Histogram of word Length
    int c, length;
    int ncount[10];
    length = 0;
    
    for(int i=0;i<10;++i)
        ncount[i] = 0;
    while((c = getchar())!= EOF){
        if(c == ' '|| c=='\t'|| c=='\n'){
            if(length>0){
                ++ncount[length-1];
            }
            length = 0;
        }
        else{
            ++length;
        }
    }
    for(int i=0;i<10;++i){
        printf("%2d|",i+1);
        for(int n=0;n<ncount[i];++n)
            printf("+");
        printf("\n");
        
    }*/

    // Exercise 14 Histogram of Character Frequency

    int c;
    int nnum[10];
    int nchar[26];


    for(int i=0;i<10;++i)
        nnum[i] = 0;
    for(int i=0;i<26;++i)
        nchar[i] = 0;
    
    
    while((c = getchar())!= EOF){
        if(c>='0'&&c<='9')
            ++nnum[c-'0'];
        if(c>='a'&&c<='z')
            ++nchar[c-'a'];
        if(c>='A'&& c<='Z')
            ++nchar[c-'A'];
    }

    for(int i = 0;i<10;++i){
        printf("%c|", i+'0');
        for(int j=0;j<nnum[i];++j)
            printf("+");
        printf("\n");
    }

    for(int i = 0;i<26;++i){
        printf("%c|", i+'A');
        for(int j=0;j<nchar[i];++j)
            printf("+");
        printf("\n");
    }


}
