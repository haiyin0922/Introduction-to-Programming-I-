#include <stdio.h>

char list[10];

int main(void)
{
    int num, i;
    scanf("%d",&num);
    for(i=0; i<num; i++)
        list[i]='1'+i;
    Perm(0,num);
    return 0;
}

void show(int n)
{
    int i;
    printf("(%c", list[0]);
    for (i=1; i<n; i++) {
        printf(",%c", list[i]);
    }
    printf(")\n");
}

void Swap(int k, int i)
{
    int temp;

    temp = list[k];
    list[k] = list[i];
    list[i] = temp;

}

void Perm(int k, int n)
{
    int i;

    if(k<n-1){
        Perm(k+1, n);
            for(i=1; i<=n-1-k; i++){
                Swap(k, k+i);
                Perm(k+1, n);
                Swap(k, k+i);
            }
    }

    if(k==n-1){
        show(n);
    }
}
