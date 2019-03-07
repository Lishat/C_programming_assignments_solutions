#include<stdio.h>
 
double func(int n, double A[])
{
    double k;
    if(n == 2)
    {
        return 2;
    }
    else if(n == 1)
    {
        return 1;
    }
    else if(n == 0)
    {
        return 0;
    }
    else if(A[n] != -1)
    {
        return A[n];
    }
    else
    {
        k = 1*func(n - 1, A) + 2*func(n - 2, A) + 3*func(n - 3, A);
        A[n] = k;
        return k;
    }    
}
    
int main()
{
    int n, t, i, j;
    double l, A[1000000];
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        for(j = 0; j <= 10000; j++)
        {
            A[j] = -1;
        }
        l = 0;
        scanf("%d", &n);
        l = func(n, A);
        printf("%.0f\n", l);
    }
    return 0;
}
