#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[100001];
    int k,i, det=1 ;
    while (scanf("%s", input) != EOF)
        {
            k=strlen(input);
            det=1;
            for(i=0; i<k/2; i++)
            {
                if (input[i] != input[k-1-i])
                {
                det=0;
                break;
                }
            }
            if (det) printf("Yes\n");
            else printf("No\n");
        }

        return 0;
}
