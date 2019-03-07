    #include<stdio.h>
    #include<string.h>
     
    void rem(char A[], char B[])
    {
        int i, p = 0, q = 0, r = 0, l;
        l = strlen(A);
        strcpy(B, A);
        A[l] = '\0';
        if(B[0] == B[1])
        {
            p = 0;
            q = q + 1;
        }
        for(i = 1; i <= l - 1; i++)
        {
            if(B[i] == B[i+1] && B[i] != B[i -1])
            {
                p = i;
                q++;
            }
            else if(B[i] == B[i+1] && B[i] == B[i -1])
            {
                q++;
            }
            else if(B[i] != B[i+1] && B[i] == B[i -1])
            {
                q++;
                r = i;
                break;
            }
        }
        for(i = p;i <= l - q - 1; i++)
        {
            B[i] = A[i + q];
        }
        for(i = l - q; i <= l; i++)
        {
            B[i] = '\0';
        }    
        if(p == 0 && r == 0)
        {
            strcpy(A, B);
        }
        else
        {
            strcpy(A, B);
            rem(A, B);
        }
    }
        
     
    int main()
    {
        char A[1000000], B[1000000];
        int i, t, p;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf(" %s", A); 
            rem(A, B);
            p = strlen(A);
            if(p != 0)
            printf("%s\n", A);
            else
            printf("-1\n");
        }
        return 0;
    }
