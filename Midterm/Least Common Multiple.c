#include <stdio.h>
int gcd(int a,int b);
int lcm(int a,int b);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", lcm(num1, num2));
}
int gcd( int a, int b )
{
    if(a==0 || b==0){
        if(a>b)
            return a;
        else
            return b;
    }
    if(a==b)
        return a;
    if(a>b)
        gcd(b, a%b);

    if(b>a)
        gcd(a, b%a);
}

int lcm( int a, int b )
{
    int D = gcd(a, b);
    int L = a/D*b;
    return L;
}
