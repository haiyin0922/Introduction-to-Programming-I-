#include <stdio.h>
int main()
{
    int M;
    int i, j;
    int p[30][30] = {0};

    scanf("%d", &M);

    p[0][1] = 1;
    printf("%10d\n", 1);

    for(i=1; i<M; i++){
        for(j=1; j<=i+1; j++){
            p[i][j] = p[i-1][j] + p[i-1][j-1];
            printf("%10d", p[i][j]);
        }
        printf("\n");
    }

    return 0;

}
