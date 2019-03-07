    #include<stdio.h>
    #include<string.h>
     #include<conio.h>
    void mul(char A[], char result[], int digit)
    {
        int p, l, carry = 0, m, i, q, j;
        m = strlen(A);
        for(i = m - 1; i >= 0 ; i--)
        {
             p = A[i] - 48;
             l = p * digit + carry;
             carry = l/10;
             result[i] = l%10 + 48;
             if(i == 0)
             {
                 for(j = 0; j <= m - 1; j++)
                 {
                     if(result[j] == 48)
                     {
                         q = 1;
                     }
                     else if(result[j] != 48)
                     {
                         q = 0;
                         break;
                     }
                 }
             }
             if(i == 0 && q == 1)
             printf("0\n");
             else if(i == 0 && l >= 10)
             {
                 printf("%d", l/10);
                 for(j = 0; j <= m - 1; j++)
                 printf("%c", result[j]);
                 printf("\n");
             }
             else if(i == 0 && l <= 10)
             {
                for(j = 0; j <= m - 1; j++)
                 printf("%c", result[j]);
                 printf("\n");
             }
        }
    }


    int main()
    {
        char A[1000000];
        char result[1000000], s[1000000];
        int digit, t, i;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            strcpy(result, s);
            scanf(" %s", A);
            scanf("%d", &digit);
            mul(A, result, digit);
        }
        return 0;
    }

