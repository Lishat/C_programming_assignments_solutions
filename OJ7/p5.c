#include<stdio.h>
#include<string.h>

void swaps(char names[][20], int i)
{
	char temp[1000];
	strcpy(temp, names[i]);
	strcpy(names[i] , names[i+1]);
	strcpy(names[i+1], temp);
}

void swap(int B[], int i)
{
	int tmp;
	tmp = B[i];
	B[i] = B[i+1];
	B[i + 1] = tmp;
}

void sort(char names[][20], int low, int high)
{
	int i, j;
	for(j = high; j >= low; j--)
	{
		for(i = low; i <= j - 1; i++)
		{
			if(strcmp(names[i], names[i+1]) >= 0)
			{
				swaps(names, i);
			}
		}
	}	
}

void lengthsort(char names[][20], int n, int B[])
{
	int i, j;
	for(j = n - 1; j >=  0; j--)
	{
		for(i = 0; i <= j - 1; i++)
		{
			if(B[i] >= B[i+1])
			{
				swaps(names, i);
				swap(B, i); 
			}
		}
	}
}

void specialSorting(char names[][20], int n)
{
	int B[1000], i, low = 0, high = 0;
	for(i = 0; i <= n - 1; i++)
	{
		B[i] = strlen(names[i]);
	}
	lengthsort(names, n, B);
	for(i = 1; i <= n - 1; i++)
	{ 
		if(B[i] != B[i-1])
		{
			high = i - 1;
			sort(names, low, high);
			low = i;
		}
	}
}

int main()
{
	int n, i, t, j;
	scanf("%d", &t);
	for(j = 1; j <= t; j++)
	{
		char names[1000][20];
		scanf("%d", &n);
		for(i = 0; i <= n - 1; i++)
		{
			scanf(" %s", names[i]);
		}
		specialSorting(names, n);
		for(i = n - 1; i >= 0; i--)
		{
			printf("%s\n", names[i]);
		}
	}
	return 0;
}
