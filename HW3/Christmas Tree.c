#include <stdio.h>
int main(void)
{
   int L, W, H;
   int i, j;

   scanf("%d%d%d", &L,&W,&H);


    if(W<=2*L-1)
    {
        for(i = 0; i < L; i++)
        {
           for(j = 0; j < L-i-1; j++)
           printf(" ");
           for(j = L-i-1; j < L+i; j++)
           printf("*");
           printf("\n");
        }

       for(i = L; i < L+H ; i++)
        {
           for(j = 0; j < (2*L-1-W)/2 ; j++)
           printf(" ");
           for(j = (2*L-1-W)/2; j <(2*L-1+W)/2 ; j++)
           printf("*");
           printf("\n");
        }
    }
    else
    {
       for(i = 0; i < L; i++)
       {
           for(j = 0; j < (W-2*i-1)/2; j++)
               printf(" ");
           for(j = (W-2*i-1)/2; j < (W+2*i+1)/2; j++)
               printf("*");
               printf("\n");
       }

       for(i = 0; i < H ; i++)
       {
           for(j = 0; j < W ; j++)
               printf("*");
               printf("\n");
       }
    }
     return 0;
}
