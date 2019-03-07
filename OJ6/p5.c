    #include<stdio.h>
     
    int main()
    {
        int A[1000][1000], i, j, k, t, m ,n, l;
        scanf("%d", &t);
        for(k = 1; k <= t; k++)
        {
            scanf("%d", &n);
            for(i = 0; i <= n - 1; i++)
            {
                for(j = 0; j <= i; j++)
                {
                    A[i][j] = 0;
                }
            }
            for(i = 0; i <= n - 1; i++)
            {
                A[i][i] = i + 1;
            }
            for(i = 0; i < n - 1; i++)
            {
                l = n;
                for(j = i + 1; j <= n - 1; j++)
                {
                    A[i][j] = A[i][j - 1] + l;
                    l = l - 1; 
                }
            }
            for(i = 0; i <= n - 1; i++)
            {
                for(j = 0; j <= n - 1; j++)
                {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
        }
        return 0;
    }
