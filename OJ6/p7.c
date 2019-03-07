#include<stdio.h>
#include<string.h>
 
void partition(int A[], int low, int high)
{
    int k, i, count = 0, j, B[1000000], m, n;
    k = A[0];
    j = 0;
    for(i = low; i <= high; i++)
    {
        if(A[i] < k)
        {
            count++;
        }
    }
    B[count] = k;
    m = 0;
    n = count;
    for(i = low; i <= high; i++)
    {
        if(A[i] < k)
        {
            B[m] = A[i];
            m++;
        }
        else if(A[i] >= k)
        {
            B[n] = A[i];
            n++;
        }
    }
    for(i = low; i <= high; i++)
    {
        A[i] = B[i];
    }            
}
 
int main()
{
    int i, j, A[1000000], low, high, t, n;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        for(j = 0; j <= n - 1; j++)
        {
            scanf("%d", &A[j]);
        }
        low = 0;
        high = n - 1;
        partition(A, low, high);
        for(j = 0; j <= n - 1; j++)
        {
            printf("%d ", A[j]);
        }
        printf("\n");
    }
    return 0;
}
