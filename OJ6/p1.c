#include<stdio.h>
#include<string.h>
 
void rotateClkWise(int A[][1000], int n)
{
    int j, k, m;
    int B[1000][1000];
    for(j = 0; j <= n - 1; j++)
    {
        for(k = n - 1, m = 0; k >= 0; k--, m++)
        {
            B[j][m] = A[k][j];
        }
    }
    for(j = 0; j <= n - 1; j++)
    {
        for(m = 0; m <= n - 1; m++)
        {
            A[j][m] = B[j][m];
        }
    }
}
 
 
void scan(int A[][1000], int n)    
{
    int j, k;
    for(j = 0; j <= n - 1; j++)
    {
        for(k = 0; k <= n - 1; k++)
        {
            scanf("%d", &A[j][k]);
        }
    }
}
 
void print(int A[][1000], int n)    
{
    int j, k;
    for(j = 0; j <= n - 1; j++)
    {
        for(k = 0; k <= n - 1; k++)
        {
            printf("%d ", A[j][k]);
        }
        printf("\n");
    }
}
 
int main()
{
    int t, n, A[1000][1000], i;
    scanf("%d", &t);
    for(i = 1; i <= t;i++)
    {
        scanf("%d", &n);
        scan(A, n);
        rotateClkWise(A, n);
        print(A, n);
    }
    return 0;
}
