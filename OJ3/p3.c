    #include<stdio.h>
     
    int main()
    {
        long long int A[1000000], n, a, b, c, l, m, k, i, y, t, j;
        scanf("%lld", &t);
        for(j = 1; j <= t; j++)
        {
            scanf("%lld", &n);
            for(i = 0; i <= n - 1; i++)
            {
                scanf("%lld", &A[i]);
            }
            b = A[0];
            c = A[0];
            for(y = 0; y <= n - 1; y++)
            {
                if(b >= A[y])
                {            
                    b = A[y];
                    k = y;
                }
            
                if(c <= A[y])
                {
                    c = A[y];
                    l = y;
                }
            }
            if(k < l)
            {
                for(m = k; m <= l; m++)
                {
                    printf("%lld ", A[m]);
                }
                printf("\n");
            }
        }
        return 0;
    } 
