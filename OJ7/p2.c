#include<stdio.h>
#include<string.h>

struct Record
{
	char word[1000];
	int frequency;
	int pre;

};

void prefix(struct Record S[], char W[], int i)
{
	int m, n, j;
        m = strlen(S[i].word);
        n = strlen(W);
        if(m < n)
        {
            S[i].pre = 0;
        }
        else if(m >= n)
        {
        for( j = 0; j <= n - 1; j++)
            {
                if(S[i].word[j] == W[j])
                {
                    S[i].pre = 1;
                }
                else if(S[i].word[j] != W[j])
                {
                    S[i].pre = 0;
                    break;
                }
            }
        }
}

int main()
{
		int n, i, k, q; 
		char W[1000], big[1000];
		struct Record S[1000];
		scanf("%d", &n);
		scanf("%d", &q);
		for(i = 0; i <= n - 1; i++)
		{
			scanf(" %s %d", S[i].word, &S[i].frequency);
		}
		for(k = 1 ; k <= q; k++)
		{
			int high = -1;
			scanf(" %s", W);
			for(i = 0; i <= n - 1; i++)
			{
				prefix(S, W, i);
			}
			for(i = 0; i <= n - 1; i++)
			{
				if(S[i].pre == 1)
				{
					high = S[i].frequency;
					strcpy(big, S[i].word);			
					break;
				}
			}
			for(i = 0; i <= n - 1; i++)
			{
				if(S[i].pre == 1 && S[i].frequency >= high)
				{
					high = S[i].frequency;
					strcpy(big, S[i].word);
				} 
			}
			printf("%d\n", high);
		}
	return 0;
}
				
