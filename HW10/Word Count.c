#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void swap1(char a[31], char b[31]){
    char temp[31];

    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

void swap2(int *a, int *b){
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(char table[][31],int count[100],int n){
    int i,j;

	for(i = 1; i < n; i++){                                      //assign 0 if equal
        for(j = i-1; j >= 0 && strcmp(table[j],table[j+1]) >0 ; j--){
            swap1(table[j], table[j+1]);
            swap2(&count[j], &count[j+1]);
        }
    }
}

int main( )
{
    int nWord = 0;
    const char *word;
    char table[100][31];
    int count[100] = {0};
    int i;

    while((word = fetch_word())!= NULL){
        char temp[31];
        strcpy(temp,word);

        for (int k=0;k<strlen(word);k++)
            temp[k]=tolower(temp[k]);  //switch to LOWER CASE

        if(nWord == 0){
            strcpy(table[0], temp);
            count[0] = 1;
            nWord++;
        }
        else{      //other words.
            for( i = 0; i < nWord; i++){
                if(strcmp(table[i], temp) == 0){ //compare to each and found them equal
                    count[i]++;
                    break;
                }
            }
            //if the word hasn't been recorded in table.
            //put it to the table.
            if( i == nWord){
                strcpy(table[nWord], temp);
                count[nWord] = 1;
                nWord++;
            }
        }
    }
    sort(table,count,nWord);

    for (int i=0;i<nWord;i++){
        printf("%s %d\n",table[i],count[i]);
    }
}
