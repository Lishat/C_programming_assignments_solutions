#include<stdio.h>
 
int main()
{
        char A[10000], B[10000], C[10000], G[10000];
        int i, j, l, t, p, q, n, k, carry = 0, r, D[10000], E[10000], F[10000];
        scanf("%d", &t);
        for(l = 1; l <= t; l++)
        {
            scanf(" %s", A);
            for(i = 0; A[i] != '\0'; i++);
            scanf(" %s", B);
            for(j = 0; B[j] != '\0'; j++);
            if(i < j)
            {
                for(q = j - 1, r = i - 1; r >= 0; r = r - 1, q = q - 1)
                {
                    C[q] = A[r];
                    D[q] = C[q] - 48;
                } 
                for(k = 0; k <= j - i - 1; k++)
                {
                    D[k] = 0;
                }
                for(p = 0; p <= j - 1; p++)
                {
                    E[p] = B[p] - 48;
                    F[p] = D[p] + E[p];
                }
                for(p = j - 1; p >= 0; p--)
                {
                    if(carry == 1)
                    {
                        F[p] = F[p] + 1;
                    }
                    carry = 0;
                    if(F[p] >= 10 && p != 0)
                    {
                        F[p] = F[p] % 10;
                        carry = 1;
                    }
                }        
                for(p = 0; p <= j - 1; p++)
                {
                    printf("%d", F[p]);
                }
                printf("\n");
            }
            else if(i >= j)
            {
                for(q = i - 1, r = j - 1; r >= 0; r = r - 1, q = q - 1)
                {
                    C[q] = B[r];
                    D[q] = C[q] - 48;
                } 
                for(k = 0; k <= i - j - 1; k++)
                {
                    D[k] = 0;
                }
                for(p = 0; p <= i - 1; p++)
                {
                    E[p] = A[p] - 48;
                    F[p] = D[p] + E[p];
                }
                for(p = i - 1; p >= 0; p--)
                {
                    if(carry == 1)
                    {
                        F[p] = F[p] + 1;
                    }
                    carry = 0;
                    if(F[p] >= 10 && p != 0)
                    {
                        F[p] = F[p] % 10;
                        carry = 1;
                    }
                }        
                for(p = 0; p <= i - 1; p++)
                {
                    printf("%d", F[p]);
                }
                printf("\n");
            }
        }
        return 0;
}
