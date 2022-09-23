#include<stdio.h>
#include<string.h>

int main(){
	char input[1000];
	char temp[1000];
	int longest_length;
	int candidate_position;

	while(scanf("%s", input) == 1){
		longest_length = 0;
		candidate_position = 0;
		for(int str_start = 0; str_start < strlen(input); str_start++){
			for(int str_end = str_start; str_end < strlen(input); str_end++){
				if(ispal(input, str_start, str_end)){
					if(longest_length < str_end-str_start+1){
						longest_length = str_end-str_start+1;
						candidate_position = str_start;
					}
				}
			}
		}
		for(int i = candidate_position; i < candidate_position+longest_length; i++)
			printf("%c", input[i]);
		printf("\n");
	}
}

extern int ispal(char *str, int front, int end)
{
    int i;
    int flag;

    for(i=0; i<(end-front+2)/2; i++){
        if(*(str+front+i) != *(str+end-i)){
            flag = 0;
            break;
        }
        else
        flag = 1;
    }
    return flag;
}
