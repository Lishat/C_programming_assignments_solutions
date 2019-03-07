#include<stdio.h>
#include<string.h>
int k = 0;
void swap(char A[], int low, int high )
{
	int temp;
	temp = A[low];
	A[low] = A[high];
	A[high] = temp;
}

void fun(char A[], char S[][20], int i)
{
	strcpy(S[i], A);	
}

void pos(char A[], int low, int high, char S[][20])
{
	int i;
	if(low == high)
	{
		
		fun(A, S, k);
		k++;
	}
	else
	{
		for(i = low; i <= high; i++)
		{
			swap(A, low, i);
			pos(A, low+1, high, S);
			swap(A, low, i);
		}
	}
}

int factorial(int a)
{
	int i, product = 1;
	for(i = 1; i  <= a; i++)
	{
		product = product * i;
	}
	return product;
}
	
void sort(char S[][20], int j)
{
	int i, l;
	for(i = j - 1; i > 0; i--)
	{
		for(l = 0; l <=  i - 1; l++)
		{
			if(strcmp(S[l], S[l+1]) > 0)
			{
				char tmp[20];
				strcpy(tmp, S[l]);
				strcpy(S[l], S[l+1]);
				strcpy(S[l+1] , tmp);	
			}
		}
	}
}

int main()
{
	char A[20], S[50000][20];
	int i;
	scanf("%s", A);
	int l = strlen(A);
	pos(A, 0, l - 1, S);
	int j = factorial(l);
	sort(S, j);
	for(i = 0; i <= j - 1; i++)
	{
		printf("%s\n", S[i]);
	}
	return 0;
}
