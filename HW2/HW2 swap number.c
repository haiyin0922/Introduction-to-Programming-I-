#include <stdio.h>
int main(void)
{
    int x,y,k;
    int i;
    int temp;
    int a[5]={0,1,2,3,4};
    scanf("%d", &k);
    i=0;
    while (i<k) {
        scanf("%d%d", &x,&y);
        temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        i=i+1;
    }
    printf("%d %d %d %d% d" ,a[0],a[1],a[2],a[3],a[4]);
    return 0;
}
