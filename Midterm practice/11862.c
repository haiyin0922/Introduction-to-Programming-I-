#include <stdio.h>
#include <string.h>
#include "function.h"

int main()
{
    int j;
    int count;
    scanf("%d",&count);
    getchar(); // remove '\n' so that you can read normal input string
    for(j = 0 ; j < count ; j++){
        if(isNumber() == 1){ // all char is 0~9
           judgeA();
        }
        else judgeB(); 
        getchar();
    }
   
   
}

void judgeA(){

    char str[100];
    scanf("%s",str);
    int i = 0;
    int judge = 1;
    int len = strlen(str);
    while(i < len){
        char c = str[i];
        if (c<48 || c>57){
            judge = 0;
            break;
        }    
        i++;
    }
    if(judge==1) printf("OK!Number\n");
    else printf("error!\n");
}

void judgeB(){
    char str[100];
    scanf("%s",str);
    int i = 0;
    //printf("%s\n",str);
    int judge = 1;
    int len = strlen(str);
    while(i < len){
        char c = str[i];
        if (c<97 || c>122){
            judge = 0;
            break;
        }    
        i++;
    }
    if(judge==1) printf("OK!Word\n");
    else printf("error!\n");
}