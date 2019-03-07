    #include<stdio.h>
     
    int main()
    {
        int n, i, A[1000000], j, k, l, b, sum, m, t;
        scanf("%d", &t);
        for(m = 1; m <= t; m++)
        {
            scanf("%d", &n);
            for(i = 0; i <= n - 1; i++)
            {
                scanf("%d", &A[i]);
            }
            b = A[0];
            for(j = 0; j <= n - 1; j++)
            {
                for(k = 0; k <= n - 1; k++)
                {
                    sum = 0;
                    for(l = j; l <= k; l++)
                    {
                        sum = sum + A[l];
                        if(b <= sum)
                        {
                            b = sum;
                        }
                    }
                }
            }    
            if(b >= 0)
            {
                printf("%d\n", b);
            }
            else
            {
                printf("0\n");
            }
        }
        return 0;
    }
