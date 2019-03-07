#include<stdio.h>
#include<string.h>

struct Record
{
	int studentid;
	char studentname[1000];
};

struct Course
{
	int courseid;
	char coursename[1000];
};

struct Registration
{
	int studentid;
	int courseid;
	int marks;
};

int main()
{
	int p, q, r, i, count, s, j, t, k, n, z;
	char S[1000];
	struct Record R[1000];
	struct Course C[1000];
	struct Registration Z[1000];
	scanf("%d", &t);
	for(j = 1; j <= t; j++)
	{
		scanf("%d", &p);
		scanf("%d", &q);
		scanf("%d", &r);
		scanf("%d", &n);
		for(i = 0; i <= q - 1; i++)
		{
			scanf("%d %s", &C[i].courseid, C[i].coursename);
		}
		
		for(i = 0; i <= p - 1; i++)
		{
			scanf("%d %s", &R[i].studentid, R[i].studentname);
		}
		
		for(i = 0; i <= r - 1; i++)
		{
			scanf("%d %d %d", &Z[i].studentid, &Z[i].courseid, &Z[i].marks);
		}
		for(k = 1; k <= n; k++)
		{
			scanf("%d", &z);
			if(z == 1)
			{
				scanf(" %s", S);
				for(i = 0; i <= q - 1; i++)
				{
					if(strcmp(S, C[i].coursename) == 0 )
					{
						s = C[i].courseid;
						break;
					}
				}
				count = 0;
				for(i = 0; i <= r - 1; i++)
				{
					if(s == Z[i].courseid)
					{
						count++;
					}
				}
				printf("%d\n", count);
			}
			else if(z == 2)
			{
				char A[1000], B[1000];
				int a, b, c;
				count = 0;
				scanf(" %s %s", A, B);
				for(i = 0; i <= q - 1; i++)
				{
					if(strcmp(C[i].coursename, A) == 0)
					{
						a = C[i].courseid;
						break;
					}
				}
				for(i = 0; i <= q - 1; i++)
				{
					if(strcmp(C[i].coursename, B) == 0)
					{
						b = C[i].courseid;
						break;
					}
				}
				for(i = 0; i <= r - 1; i++)
				{
					if(a == Z[i].courseid)
					{
						c = Z[i].studentid;
						for(j = 0; j <= r - 1; j++)
						{
							if(c == Z[j].studentid && b == Z[j].courseid)
							{
								count++;
								break;
							}
						}
					} 
				}
				printf("%d\n", count);
			}
			else if(z == 3)
			{
				char A[1000];
				int a, b, c, d, e;
				scanf(" %s", A);
				for(i = 0; i <= q - 1; i++)
				{
					if(strcmp(C[i].coursename, A) == 0)
					{
						a = C[i].courseid;
						break;
					}
				}
				for(i = 0; i <= r - 1; i++)
				{
					if(a == Z[i].courseid)
					{
						b = i;
						break;
					}
				}
				c = Z[b].marks;
				for(i = 0; i <= r - 1; i++)
				{
					if(a == Z[i].courseid && Z[i].marks >= c)
					{
						c = Z[i].marks;
						d = i;
					}
				}
				e = Z[d].studentid;
				for(i = 0; i <= p - 1; i++)
				{
					if(R[i].studentid == e)
					{
						printf("%s\n", R[i].studentname);
						break;		
					}
				}
			}
		}
	}
	return 0;
}
