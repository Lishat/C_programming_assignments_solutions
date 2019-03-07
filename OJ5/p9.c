    #include<stdio.h>
    #include<math.h>
    void straight(int n, int q)
    {        
            int k, i, p;
            p = pow(2,q);
            for(i = 1; i <= p; i++)
            {
                printf("1");
                for(k = 1; k <= pow(2, n+2) - 1; k++)
                {
                    printf(" ");
                }
            }
    }
    void lower(int i, int k, int q)
    {    
                int m, count, j;
                for(j = 1; j <= pow(2, q); j++)
                {
                    count = 0;
                    printf("1");
                    for(m = 1; m <= (2*i - 1);m++ )
                    {
                        printf(" ");
                        count++;
                    }
                    printf("1");
                    for(m = 1; m <= pow(2, k + 2) - count - 2; m++)
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                
    }
     
    int main()
    {
        int i, n, j, k, q, p, z, t;
        scanf("%d", &t);
        for(z = 1; z <= t; z++)
        {
            scanf("%d", &n);
            for(k = n; k >= 1; k--)
            {
                q = n - k;
                for(i = 1; i <= pow(2, k); i++)
                {
                    for(j = 1; j <= pow(2, k+1) - 2; j++)
                    {
                        printf(" ");
                    }
                    straight(k, q);
                    printf("\n");
                }
                for(i = 1, p = pow(2, k + 1) - 3; i <= pow(2, k); i++, p--)
                {
                    for(j = 1; j <= p; j++)
                    {
                        printf(" ");
                    }
                    lower(i, k, q);
                }
                
                
            }
        }
        return 0;
    }
