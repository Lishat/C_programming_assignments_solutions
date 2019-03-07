    #include<stdio.h>
     
    int main()
    {
        char str1[1000000], str2[1000000], p;
        int i, j, k, m, t, r;
        scanf("%d", &t);
        for(r = 1; r <= t; r++)
        {
            scanf(" %[^\n]s", str1);
            for(k = 0;str1[k] != '\0'; k++);
            i = 0;
            j = k - 1;
            for(i = 0; i <= k - 1; i++)
            {
                p = str1[i];
                str2[j] = p ;
                j = j - 1;
            }
            for(m = 0; m <= k - 1; m++)
            printf("%c", str2[m]);
            printf("\n"); 
        }
        return 0;
    }
