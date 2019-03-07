    #include<stdio.h>
     
    int main()
    {
        int t, i, o, l, m, a;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%d", &a);
            char *p;
            p = (char *)&a;
            l = *(p+1);
            m = *(p+2);
            o = l + m;
            printf("%d\n", o);
        }
        return 0;
    }
