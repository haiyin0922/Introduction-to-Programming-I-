#include<stdio.h>
int main(){

    int N,sum=0;
    int i=128,j;
    int x[i],y[i],a,b;
    int m[i],n[i];

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d%d%d%d", &x[i], &y[i], &a, &b);
        m[i]=x[i]+a;
        n[i]=y[i]+b;
    }
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(x[i]>=m[j]||x[j]>=m[i]||y[i]>=n[j]||y[j]>=n[i])
                continue;
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
