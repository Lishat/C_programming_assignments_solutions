#include<stdio.h>
#include<string.h>

void merge(char A[], char B[], char C[], int i, int j, int k)
{
	int m, n;
	m = strlen(A);
	n = strlen(B);
		if(k == m + n)
		{
			C[k] = '\0';
		}
		else if(k%2 == 0)
		{
			C[k] = A[i];
			merge(A, B, C, i+1, j, k+1);
		}
		else if(k%2 != 0)
		{
			C[k] = B[j];
			merge(A, B, C, i, j+1, k+1);
		}
}
void mingling(char A[], char B[], char C[])
{
	int i = 0, j = 0, k = 0;
	merge(A, B, C, i, j, k); 
}
int main()
{
	char A[1000000], B[1000000], C[1000000];
	int i, t, n, m;
	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		scanf(" %s %s", A, B);
		mingling(A, B, C);
		printf("%s\n", C);
	}
	return 0;
}
	
