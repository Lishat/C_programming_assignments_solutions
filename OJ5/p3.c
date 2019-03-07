    #include<stdio.h>
    #include<string.h>
     
    void rev(char A[], int j, int n, char B[])
    {
        char ch;
        int i, k, m;
        strcpy(B, A);
        for( i = n - j, k = n - 1;i <= n - 1; i++, k--)
        {
            B[i] = A[k];
        }
        strcpy(A, B);
    }
            
    int main()
    {
        int t, i, j, n, k, l;
        char A[1000000], B[1000000];
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            n = 0;
            scanf(" %s", A);
            scanf("%d", &k);
            n = strlen(A);
            for(j = 2; j <= k; j++)
            {
                rev(A, j, n, B);
            }
            printf("%s\n", B);
        }
        return 0;
    }
