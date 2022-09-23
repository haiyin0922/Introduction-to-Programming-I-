#include <stdio.h>
int main()
{
    int N, M;
    int i=100;
    int sum=0, A=1;
    int a[i];

    scanf("%d%d", &N, &M);

    for(i=N; i>=0; i--) {
        scanf("%d", &a[i]);
    }

    for(i=0; i<N+1; i++){
        sum=sum+a[i]*A;
        A=A*M;
    }

    printf("%d\n", sum);

    return 0;
}
