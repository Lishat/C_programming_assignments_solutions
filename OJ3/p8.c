#include<stdio.h>
 
int main()
{
    int A[1000000], i, n, tmp, k, j, p, l, t, m;
    scanf("%d", &t);
    for(m = 1; m <= t; m++)
    {
        scanf("%d", &n);
        k = n;
        l = n;
        for(i = 0; i <= n - 1; i++)
        {
            scanf("%d", &A[i]);
        }
        while(k != 0)
        {
            for(i = 0; i <= k - 2 ;i++)
            {    
                if(A[i] > A[i+1])
                {                
                    tmp = A[i+1];
                    A[i+1] = A[i];
                    A[i] = tmp;            
                }
    
            }
        
            k = k - 1;
        }
        for(p = 0; p <= l - 1; p++)
        {
            printf("%d ", A[p]);
        }
        printf("\n");
    }
    return 0;
}
