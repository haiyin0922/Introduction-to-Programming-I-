#include <stdio.h>
int main()
{
    int N, A;

    scanf("%d", &N);
    A = N%3;

    if(N == 1 || N == 2 || N == 3 )
        printf("%d\n", N);
    else{
        if( A == 1 || A == 2 )
            printf("%d\n", N-(N-3)/3-1);

        else
            printf("%d\n", N-(N-3)/3);
    }

    return 0;

}
