#include <stdio.h>
int isNumber()
{
    char c;
    c = getchar() ;

    if ((c<48 || c>57)){
        ungetc(c, stdin);
        return 0;
    }
    else{
        ungetc(c, stdin);
        return 1;
    }
}
