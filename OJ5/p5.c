    #include<stdio.h>
    #include<string.h>
     
    int isPrefix(char s1[], char s2[])
    {
        int m, n, j, flag = 1;
        m = strlen(s1);
        n = strlen(s2);
        if(m < n)
        {
            flag = 0;
        }
        else if(m >= n)
        {
        for( j = 0; j <= n - 1; j++)
            {
                if(s1[j] == s2[j])
                {
                    flag = 1;
                }
                else if(s1[j] != s2[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        return flag;
    }
     
    int isSuffix(char s3[], char s4[])
    {
        int m, n, j, flag=1;
        m = strlen(s3);
        n = strlen(s4);
        if(m < n)
        {
            flag = 0;
        }
        else if(m >= n)
        {
        for( j = m - 1; n != 0; j--, n--)
            {
                if(s4[n-1] == s3[j])
                {
                    flag = 1;
                }
                else if(s4[n-1] != s3[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        return flag;
    }
     
    void encode(char s1[])
    {
        int m, i;
        m = strlen(s1);
        for(i = 0; i <= m - 1; i++)
        {
            if(s1[i] >= 65 && s1[i] <= 89)
            {
                s1[i] = s1[i] + 1;
            }
            else if(s1[i] >= 97 && s1[i] <= 121)
            {
                s1[i] = s1[i] + 1;
            }
            else if(s1[i] == 90)
            {
                s1[i] = 65;
            }
            else if(s1[i] == 122)
            {
                s1[i] = 97;
            }
        }
    }
     
    void decode(char s2[])
    {
        int m, i;
        m = strlen(s2);
        for(i = 0; i <= m - 1; i++)
        {
            if(s2[i] >= 66 && s2[i] <= 90)
            {
                s2[i] = s2[i] - 1;
            }
            else if(s2[i] >= 98 && s2[i] <= 122)
            {
                s2[i] = s2[i] - 1;
            }
            else if(s2[i] == 65)
            {
                s2[i] = 90;
            }
            else if(s2[i] == 97)
            {
                s2[i] = 122;
            }
        }
    }
     
    int main()
    {
        char s1[100000], s2[100000], s3[100000], s4[100000], s5[100000];
        int k, l, t, i;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            strcpy(s1, s5);
            strcpy(s2, s5);
            strcpy(s3, s5);
            strcpy(s4, s5);
            scanf(" %s", s1);
            scanf(" %s", s2);
            scanf(" %s", s3);
            scanf(" %s", s4);
            k = isPrefix( s1, s2);
            l = isSuffix( s3, s4);
            encode(s1);
            decode(s2);
            printf("%d\n", k);
            printf("%d\n", l);
            printf("%s\n", s1);
            printf("%s\n", s2);
        }
        return 0;
    }
