#include <stdio.h>
int main()
{
    int N, clock, x, y;
    int row, col;
    int dir_r = 0, dir_c = 1;
    int i, j;
    int s[20][20];

    for(i=0;i<20;i++){
        for(j=0;j<20;j++)
            s[i][j]=-1;
    }

    scanf("%d%d%d%d", &N, &clock, &y, &x);
    row = y;
    col = x;

    if(clock == 1)
        dir_c = -1;

    i = 0;
    while(i < N*N){
        s[row][col] = i;
        // 向右
        if(dir_c==1 && (col+dir_c==N || s[row][col+dir_c]!=-1)){
            dir_c = 0;
        if(clock == 0)
            dir_r = 1;
        else dir_r = -1;
        if(row+dir_r<0 || row+dir_r==N || s[row+dir_r][col]!=-1)
        break;
        }
        // 向左
        else if(dir_c==-1 && (col+dir_c<0 || s[row][col+dir_c]!=-1)){
            dir_c = 0;
        if(clock == 0)
            dir_r = -1;
        else dir_r = 1;
        if(row+dir_r<0 || row+dir_r==N || s[row+dir_r][col]!=-1 )
        break;
        }
        // 向下
        else if(dir_r==1 && (row+dir_r==N || s[row+dir_r][col]!=-1)){
            dir_r = 0;
        if(clock == 0)
            dir_c = -1;
        else dir_c = 1;
        if(col+dir_c<0 || col+dir_c==N || s[row][col+dir_c]!=-1)
        break;
        }
        // 向上
        else if(dir_r==-1 && (row+dir_r<0 || s[row+dir_r][col]!=-1)){
            dir_r = 0;
        if(clock == 0)
            dir_c = 1;
        else dir_c = -1;
        if(col+dir_c<0 || col+dir_c==N || s[row][col+dir_c]!=-1)
        break;
        }
        row += dir_r;
        col += dir_c;
        i++;
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(s[i][j] == -1)
            s[i][j] = 0;
            printf(" %d", s[i][j]);
        }
    printf("\n");
    }
    return 0;
}
