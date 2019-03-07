#include<stdio.h>
 
void magic(int A[][1000], int n)
{
    int i, j, p, q, r;
    i = n - 1;
    j = n/2;
    for(r = 1; r <= n*n; r++)
    {
        p = (i+n)%n;
        q = (j+n)%n;    
        if(A[p][q] == 0)
        {
            A[p][q] = r;
            i = i + 1;
            j = j + 1;
        } 
        else if(A[p][q] != 0)
        {
            A[(p - 2 + n) % n][(q - 1 + n) % n] = r;
            i = p - 1;
            j = q;
        }
    }
}
        
            
int main()
{
    int i, t, A[1000][1000], n, j, p;
    scanf("%d", &t);
    for(p = 1; p <= t; p++)
    {
        scanf("%d", &n);
            for(i = n - 1; i >= 0; i--)
            {
                for(j = 0; j <= n - 1; j++)
                {
                    A[i][j] = 0;
                }
            }
            if(n % 2 == 0)
            {
                printf("Magic square is not possible\n");
            }
            else
            {
                magic(A, n);
                for(i = n - 1; i >= 0; i--)
                {
                    for(j = 0; j <= n - 1; j++)
                    {
                        printf("%d\t", A[i][j]);
                    }
                    printf("\n");
                }
            }
            
    }
    return 0;
}
