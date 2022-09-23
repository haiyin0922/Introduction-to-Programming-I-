#include <stdio.h>
#include <string.h>
void sen_rev( char *now ){
    sen_rev(*(now+1));
    printf("%s ",now);
}

int main()
{
    char sen[500];
    fgets(sen, 500, stdin);
    sen[strlen(sen)-1] = '\0';
    sen_rev(sen);
    return 0;
}
