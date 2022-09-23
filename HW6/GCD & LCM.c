#include <stdio.h>

extern int gcd( int a, int b )
{
    if(a==b)
        return a;

    if(a==0 || b==0){
        if(a>b)
            return a;
        else
            return b;
    }

    if(a>b)
        return gcd(b, a%b);

    if(b>a)
        return gcd(a, b%a);
}

extern int lcm( int a, int b )
{
    int D = gcd(a, b);
    int L = a*b/D;

    return L;
}
