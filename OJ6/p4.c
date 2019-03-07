    #include<stdio.h>
    #include<string.h>
     
    void smartRead(char data[], int next[], char result[])
    {
        int j, n, l;
        n = strlen(data);
        result[0] = data[0];
        j = 1;
        l = 0;
        while(l != -1)
        {
            result[j] = data[next[l]];
            l = next[l];
            j++;
        }
    }
     
    int main()
    {
        char data[1000000], result[1000000];
        int next[1000000], t, n, j, i;
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%s", data);
            n = strlen(data);
            for(j = 0; j <= n - 1; j++)
            {
                scanf("%d", &next[j]);
            }
            smartRead(data, next, result);
            printf("%s\n", result);
        }
    }
