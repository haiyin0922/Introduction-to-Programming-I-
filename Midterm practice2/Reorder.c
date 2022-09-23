#include <stdio.h>

int main(void){
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    reorder(&num1, &num2, &num3, &num4);
    printf("order number: %d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}

void cmp_and_swap(int *first, int *second)
{
    int temp;

    if(*first > *second){
        temp = *first;
        *first = *second;
        *second = temp;
    }
}

void reorder(int* n1, int* n2, int* n3, int* n4)
{
    cmp_and_swap(n1, n2);
    cmp_and_swap(n1, n3);
    cmp_and_swap(n1, n4);
    cmp_and_swap(n2, n3);
    cmp_and_swap(n2, n4);
    cmp_and_swap(n3, n4);
}
