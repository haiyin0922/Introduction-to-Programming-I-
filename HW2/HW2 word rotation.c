#include <stdio.h>
#include <string.h>
int main(void)
{
    int k;
    int i,j;
    char temp;
    char word[1001];
    scanf("%s", word);
    k=strlen(word);
    i=0;
        while (i<k) {
        temp=word[0];
            j=0;
            while (j<k) {
                word[j]=word[j+1];
                j=j+1;
            }
        word[k-1]=temp;
        printf("%s\n", word);
        i=i+1;
    }
    return 0;
}
