#include <stdio.h>
int main()
{
    int T;
    int i;
    char a[10000], b[10000], c[10000], d[10000], e[10000];

    scanf("%d", &T);

    for(i=0; i<T; i++) {
        scanf("%s%s%s%s%s", &a[i], &b[i], &c[i], &d[i], &e[i]);
    }

    for(i=0; i<T; i++) {
        if(a[i]==b[i]&&c[i]==d[i]&&d[i]==e[i] || a[i]==c[i]&&b[i]==d[i]&&d[i]==e[i] || a[i]==d[i]&&b[i]==c[i]&&c[i]==e[i]
       || a[i]==e[i]&&b[i]==c[i]&&c[i]==d[i] || b[i]==c[i]&&a[i]==d[i]&&d[i]==e[i] || b[i]==d[i]&&a[i]==c[i]&&c[i]==e[i]
       || b[i]==e[i]&&a[i]==c[i]&&c[i]==d[i] || c[i]==d[i]&&a[i]==b[i]&&b[i]==e[i] || c[i]==e[i]&&a[i]==b[i]&&b[i]==d[i]
       || d[i]==e[i]&&a[i]==b[i]&&b[i]==c[i])
           printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
