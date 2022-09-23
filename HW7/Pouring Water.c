#include<stdio.h>
int liters[5];
int numbers[5];

int main(void)
{
    int n, i;
    int water;

    scanf("%d", &n);

    for (i = 0 ; i < n ; i++){
        scanf("%d", &liters[i]);
    }
    scanf("%d", &water);
    filling(water, 0, n);
    return 0;
}

void showResult(int n)
{
    int i;

    printf("(%d", numbers[0]);
    for (i=1; i<n; i++){
        printf(",%d", numbers[i]);
    }
    printf(")\n");

}

void filling(int amount, int cur, int n)
{
   	int i;

	if(cur < n){
		if(amount == 0)
			showResult(n);
		else if(amount > 0) {
			numbers[cur]++;
			filling(amount-liters[cur], cur, n);
			numbers[cur]--;
			filling(amount, cur+1, n);
		}
	}
}
