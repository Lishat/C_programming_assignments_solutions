    #include<stdio.h>
     
    int main()
    {
        int a, b, k, sum, j, i, n, d, l, t;
        scanf("%d", &t);
        for(l = 1; l <= t; l++)
        {    
            n = 0;
            scanf("%d %d", &a, &b);
            for(i = a; i <= b; i++)
            {
                k = i;
                sum = 0;
                while(k != 0)
                {    
                    j = k % 10;
                    k = k / 10;
                    sum = sum + j*j*j;
                }
                if(sum == i)
                {
                    n = n + 1;
                }
            }
            printf("%d\n", n);
        }    
        return 0;
    }
