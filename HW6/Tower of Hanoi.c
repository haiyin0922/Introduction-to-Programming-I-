#include <stdio.h>

void hanoi( int rod_N, int rod_A, int rod_B, int rod_C )
{
    if(rod_N==1){
        printf("Move from rod %d to rod %d.\n", rod_A, rod_B);
    }

    else{
        hanoi(rod_N-1, rod_A, rod_C, rod_B);
        printf("Move from rod %d to rod %d.\n", rod_A, rod_B);
        hanoi(rod_N-1, rod_C, rod_B, rod_A);
    }
}
