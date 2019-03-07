    #include<stdio.h>
     
    int main()
    {
        int i, m, n, j, A[1000][1000], B[1000][1000], k, t;
        scanf("%d", &t);
        for(k = 1; k <= t; k++)
        {
            scanf("%d %d", &m, &n);
            for(i = 0; i <= m - 1; i++)
            {
                for(j = 0; j <= n - 1; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }
            if(m == 1 && n == 1)
            {
                printf("%d\n", A[0][0]);
            }
            else if(m == 1)
            {
                for(j = 0; j <= n - 2; j++)
                {
                    B[0][j+1] = A[0][j];
                }
                B[0][0] = A[0][n - 1];
                for(i = 0; i <= m - 1; i++)
                {
                    for(j = 0; j <= n - 1; j++)
                    {
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }
            }
            else if(n == 1)
            {
                for(i = 0; i <= m - 2; i++)
                {
                    B[i][0] = A[i+1][0];
                }
                B[m - 1][0] = A[0][0];
                for(i = 0; i <= m - 1; i++)
                {
                    for(j = 0; j <= n - 1; j++)
                    {
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                for(j = 0; j <= n - 2; j++)
                {
                    B[0][j+1] = A[0][j];
                }
                for(i = m - 1; i >= 1; i--)
                {
                    B[i - 1][0] = A[i][0];
                }
                for(j = n - 1; j >= 1; j--)
                {
                    B[m - 1][j - 1] = A[m - 1][j];
                }
                for(i = 0; i <= m - 2; i++)
                {
                    B[i + 1][n - 1] = A[i][n - 1];
                }
                for(i = 1; i <= m - 2; i++)
                {
                    for(j = 1; j <= n - 2; j++)
                    {
                        B[i][j] = A[i][j];
                    }
                }
                for(i = 0; i <= m - 1; i++)
                {
                    for(j = 0; j <= n - 1; j++)
                    {
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }
            }
        }
        return 0;
    }            
