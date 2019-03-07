    #include<stdio.h>
     
    int main()
    {
        int t, i, j, k, A[1000][1000], m, n, y, count, p=1, q=1, l;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%d %d", &m, &n);
            for(j = 0; j <= m - 1; j++)
            {
                for(k = 0; k <= n - 1; k++)
                {
                    scanf("%d", &A[j][k]);
                }
            }
            for(j = 0; j <= m - 1; j++)
            {    
                p = 1;
                count = 0;
                for(k = 0; k <= n - 1; k++)
                {    
                    if(A[j][k] == 1)
                    {
                        count = count + 1;
                        y = k;
                    } 
                }
                for(l = y; l >= y - count + 1; l--)
                {
                    if(A[j][l] == 1)
                    {
                        p = 1;
                    }
                    else if(A[j][l] != 1)
                    {
                        p = 0;
                    }
                    if(p == 0)
                    break;
                }
                if(p == 0)
                break;
            }
            for(j = 0; j <= n - 1; j++)
            {    
                q = 1;
                count = 0;
                for(k = 0; k <= m - 1; k++)
                {    
                    if(A[k][j] == 1)
                    {
                        count = count + 1;
                        y = k;
                    } 
                }
                for(l = y; l >= y - count + 1; l--)
                {
                    if(A[l][j] == 1)
                    {
                        q = 1;
                    }
                    else if(A[l][j] != 1)
                    {
                        q = 0;
                    }
                    if(q == 0)
                    break;
                }
                if(q == 0)
                break;
            }
            if(p == 1 && q == 1)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        return 0;
    }
