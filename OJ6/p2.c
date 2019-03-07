    #include<stdio.h>
    #include<string.h>
    void scan(int A[], int m)
    {
        int i;
        for(i = 0; i <= m-1;i++)
        {
            scanf("%d", &A[i]);
        }
    }
        
     
    void merge(int A[], int B[], int C[], int low1, int high1, int low2, int high2, int m, int n)
    {
        int j, k, l, i;
        k = low1;
        l = low2;
        for(i = 0; i <= high1 - low1 + high2 - low2 + 1; i++)
        {
            if(k > high1)
            {
                C[i] = B[l];
                l++;
            }
            else if(l > high2)
            {
                C[i] = A[k];
                k++;
            }
            else if(A[k] <= B[l])
            {
                C[i] = A[k];
                k++;
            }
            else
            {
                C[i] = B[l];
                l++;
            }
            printf("%d ", C[i]);
        }
    }
     
    int main()
    {
        int i, t, A[100000], B[100000], C[100000], m, n;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%d", &m);
            scanf("%d", &n);
            scan(A, m);
            scan(B, n);
            merge(A, B, C, 0, m-1, 0, n-1, m, n);
            printf("\n");
        }
        return 0;
    }
