    #include<stdio.h>
     
    int main()
    {
        int i, j, p, t, count, n;
        long long int k, A[1000];
        scanf("%d", &t);
        for(p = 1; p <= t; p++)
        {
            count = 0;
            scanf("%d", &n);
            for(i = 0; i <= n - 1; i++)
            {
                scanf("%lld", &A[i]);
            }
            for(i = 0; i <= n - 1; i++)
            {
                k = i;
                j = 0;
                while(j != n)
                {
                    k = (k + 1 + A[k]) % n;
                    j = j + 1;
                    if ( k == i)
                    {
                        j = n;
                        count = count + 1;
                    }
                }
                        
            }
            printf("%d\n", count);
        }
        return 0;
    }
