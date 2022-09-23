#include <stdio.h>
int main()
{
    int N ,M;
    int i;
    int sum;
    int temp;
    int a[11], b[11];

    scanf("%d", &N);
    M = N+1;

    for(i=0; i<11; i++){
        b[i] = M%2;
        M = M/2;
        if(M == 1)
            temp = i+1;
    }

    for(i=0; i<11; i++){
        a[i] = N%2;
        N = N/2;
        if(a[i] == 0)
        break;
    }
        sum = i;

    for(i=temp; i>=0; i--)
        printf("%d", b[i]);

    printf(" %d", sum);

    return 0;
}
