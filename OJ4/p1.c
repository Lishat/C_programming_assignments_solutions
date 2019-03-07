#include<stdio.h>
#include<string.h>
 
int rev(char A[],int y, int z)
{
    int k;
    for(k = z; k >= y; k--)
    {
        printf("%c", A[k]);
    }
}
int main()
{
    int t, i, l, j, p, q;
    char str[1000000];
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {    
        l = 0;
        p = 0;
        scanf(" %[^\n]s", str);
        l = strlen(str);
        str[l] = '\n';
        for(j = 0; j <= l; j++)
        {
            if(str[j] == 32 || str[j] == 46 || str[j] ==10)
            {
                q = p;
                p = j + 1;
                rev(str, q, j - 1);
                printf("%c", str[j]);
            }
            else if(j == l)
            {
                rev(str, p, l);
                printf("%c", str[j]);
            }
        }
    }
    return 0;
}
