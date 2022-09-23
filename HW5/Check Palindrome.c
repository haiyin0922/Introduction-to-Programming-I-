#include <stdio.h>

int isPalindrom(char str[], int start, int end)
{

    int i, Pal = 0;

    for(i=0; i<=(end-start)/2; i++){
        if(str[start+i]!=str[end-i]){
        Pal = 0;
        break;
        }
        else
        Pal = 1;
    }
    return Pal;
}
