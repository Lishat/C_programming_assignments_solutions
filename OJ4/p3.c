    #include<stdio.h>
     
    int main()
    {
        int i, t;
        long long int n, r, q,k;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%lld", &n);
            r = 0;
            k = n;
            while(n != 0)
            {
                q = n % 10;
                n = n / 10;
                r = r * 10 + q;
            }
            if(r == k)
            printf("1\n");
            else if(r != k)
            printf("0\n");
        }
        return 0;
    }  
