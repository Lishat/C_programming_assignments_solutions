    #include<stdio.h>
     
    int gcd(int a,int b, int c)
    {
        if(c == 1)
        {
            return 1;
        }
        else if(a%c == 0 && b%c == 0)
        {
            return c;
        }
        else 
        {
            gcd(a, b, c-1);
        }
    }        
        
    int main()
    {
        int a, b, k, t, i;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%d %d", &a, &b);
            if (a <= b)
            {
                k = gcd(a, b, a);
            }
            else if(b < a)
            {
                k = gcd(a, b, b);
            }
            printf("%d\n", k);
        }
        return 0;
    }
