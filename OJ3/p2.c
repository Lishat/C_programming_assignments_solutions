include<stdio.h>
#include<math.h>
 
int main()
{
    int t;
    long long int n, r, s, i, j;
    scanf("%d", &t);
    for(j = 1; j <= t; j++)
    {
        scanf("%lld", &n);
        s = 0;
        i = 0;
        while(n != 0)
        {    
            r = n % 10;
            if(r == 1 || r == 0)
            {
            s = s + pow(2,i) * r;
            i = i + 1;
            n = n / 10;
            }
        }
        printf("%lld\n", s);
    }
    return 0;
}
