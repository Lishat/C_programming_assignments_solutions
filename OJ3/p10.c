    #include<stdio.h>
     
    int main()
    {
        int A[4][4], B[4][4], C[4][4], i, j, k, l, p, t;
        scanf("%d", &t);
        for(p = 1; p <= t; p++)
        {
            for(i = 0; i <= 3; i++)
            {
                for(j = 0; j <= 3; j++)
                {
                    scanf("%d", &A[i][j]);
                } 
            }
            for(i = 0; i <= 3; i++)
            {
                for(j = 0; j <= 3; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }
            for(l = 0; l <= 3; l++)
            {
                for(k = 0; k <= 3; k++)
                {
                        C[l][k] = A[l][0] * B[0][k] + A[l][1] * B[1][k] + A[l][2] * B[2][k] + A[l][3] * B[3][k] ;
                }
            }
            for(i = 0; i <= 3; i++)
            {
                for(j = 0; j <= 3; j++)
                {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        }        
        return 0;
    }
