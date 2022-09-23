#include <stdio.h>
int main()
{
    int N;
    int A, B, C;
    double M, sum;

    scanf("%d", &N);
    A = N/100;
    B = (N-(A*100))/10;
    C = N-(A*100)-(B*10);
    M = C*100+B*10+A;
    sum = (M+N)/2;
    printf("%5.1f", sum);

    return 0;
}
