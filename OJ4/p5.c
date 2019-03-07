    #include<stdio.h>
     
    long double factorial(int x)
    {
        long double i, product = 1;
        for(i = 1; i <= x; i++)
        {
            product = product * i;
        }
        return product;
    }
     
    long double num(int x, int y)
    {
        long double i, product = 1;
        for(i = x + 1; i <= y; i++)
        {
            product =  product * i;
        }
        return product;
    }
     
    int main()
    {
        int i, n, j, k, p, t;
        long double A[10000];
        scanf("%d", &t);
        for(p = 1; p <= t; p++)
        {
            scanf("%d", &n);
            for(j = 0; j <= n - 1; j++) 
            {
                    for(k = n; k >= j + 2; k--)
                    {
                            printf(" ");
                    }
                    
                    for(i = 0; i <= j; i++)
                    {
                        if(i >= j/2)
                        {
                            A[i] = ((num(i, j))/(factorial(j - i)));
                            printf("%.0Lf ", A[i]);
                        }
                        else
                        {
                            A[i] = ((num(j - i, j))/(factorial(i)));
                            printf("%.0Lf ", A[i]);
                        }
                    }
                    printf("\n");
            }
        }
        return 0;
    }
