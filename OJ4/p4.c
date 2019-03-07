#include<stdio.h>
 
int main()
{
    char A[1000000], ch;
    int t, i = 0, j, count, k, w, c, l;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        count = 0;
        w = 0;
        l = 0;
        c = 0;
        j = 0;
        while((ch=getchar()) != EOF)
        {
            A[j] = ch;
            j++;
            count++;
        } 
        for(k = 0; k <= count - 1; k++)
        {
            if(A[k] >= 65 && A[k] <= 90)
            {
                c = c + 1;
            }
            else if(A[k] >= 97 && A[k] <= 122)
            {
                c = c + 1;
            }
            else if(A[k] >= 48 && A[k] <= 57)
            {
                c = c + 1;
            }
        }
        for(k = 0; k <= count - 1; k++)
        {
            if(A[k] == 32 || A[k] == 46)
            {
                w = w + 1;
            }
        }
        for(k = 0; k < count - 1; k++)
        {
            if(A[k] == 46 && A[k+1] == 32)
            {
                w = w - 1;
            }
        }
        for(k = 0; k <= count - 1; k++)
        {
            if(A[k] == 10)
            {
                l = l + 1;
            }
        }
        printf("%d %d %d\n", c, w, l);
    }
    return 0;
}
