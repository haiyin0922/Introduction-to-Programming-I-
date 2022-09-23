#include <stdio.h>
#include <string.h>
int main(void){
    char input[1001];
    int i,j;
    //allocate the longest possible space
    while (scanf("%s", input) != EOF){
	    //reverse the input
         i = strlen(input);
         j=1;
         while (j <= i)
         {
             printf("%c", input[i-j]);
             j=j+1;
         }
         printf("\n");
    }
    return 0;
}
