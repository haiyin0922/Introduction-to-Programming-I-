#include <stdio.h>
int numPrime(int start, int end)
{
    int i, j;
    int pri = end-start+1;

    for(i=start; i<=end; i++){
        for(j=2; j<i; j++){
            if(i%j == 0){
            pri = pri-1;
            break;
            }
        }
    }

    if(start==1 && end==1)
        pri = 0;
    if(start==1 && end!=1)
        pri = pri-1;
    else
        pri = pri;

    return pri;
}
