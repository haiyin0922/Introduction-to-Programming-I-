#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k;
    int n = 350;
    char string[n], s[350];

    while(fgets(string, n, stdin) != NULL)
    {
        j=0;
        for(i=0; i<=strlen(string); i++){
            if(string[i]!=32 && string[i]!='\n'){
                s[i]=string[i];
                j++;
            }
            else{
                for(k=1; k<=j; k++){
                printf("%c", s[i-k]);
                }
                j=0;
                printf("%c", string[i]);
            }
        }
    }
    return 0;
}
