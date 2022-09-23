#include <stdio.h>

int main()
{
    int i, len, a[100000];

    scanf("%d", &len);

    for(i=0; i<len; i++)
        scanf("%d", &a[i]);

    insert_sort(a, len);
}

void insert_sort(int a[], int len)
{
    int i, j, k;

    for(i=2; i<=len; i++){
        for(j=i-1; j>0 && a[j-1]>a[j]; j--){
            swap(&a[j], &a[j-1]);
        }
        for(k=0; k<len; k++){
        printf(" %d", a[k]);
        }
        printf("\n");
    }
}

void swap(int* a, int* b)
{
    int temp;

    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
