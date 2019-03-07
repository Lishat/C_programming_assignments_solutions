#include<stdio.h>
 
int main()
{
    long long int l, A[1000000], i, j, n, p, k, m, t, h;
    scanf("%lld", &t);
    for(h = 1; h <= t; h++)
    {
        m = 0;
        scanf("%lld %lld", &n, &k);
        for(l = 0; l <= n - 1; l++)
        {
            scanf("%lld", &A[l]);
        }
        for(j = 0; j <= n - 1; j++)
        {
            for(i = 0; i <= j - 1; i++)
            {        
                p = A[i] + A[j];
                if(p > k)
                {
                    m = m + 1;
                }
            }
        }
        printf("%lld\n", m);
    }
    return 0;
}
