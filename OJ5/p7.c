#include<stdio.h>
 
int main()
{
    long long int a, b, c, d, t, i;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if( b == d && a == c)
        {
            printf("YES\n");
        }
        else if( b == d)
        {
            printf("NO\n");
        }
        else if((c - a)/(b - d) > 0 && (c - a)%(b - d)  == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
