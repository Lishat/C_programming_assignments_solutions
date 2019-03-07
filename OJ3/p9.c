    #include<stdio.h>
     
    int main()
    {
        int i, j, a, b, t, l;
        scanf("%d", &t);
        for(l = 1; l <= t; l++)
        {
            scanf("%d %d", &a, &b);
            int A[a][b], B[b][a];
            for(i = 0; i <= a - 1; i++)
            {
                for(j = 0; j <= b - 1; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }
            for(j = 0; j <= b - 1; j++)
            {
                for(i = 0; i <= a - 1; i++)
                {
                    B[j][i] = A[i][j];
                }
            }
            for(j = 0; j <= b - 1; j++)
            {
                for(i = 0; i <= a - 1; i++)
                {
                    printf("%d ", B[j][i]);
                }
                printf("\n");
            }
        }
        return 0;
    }
