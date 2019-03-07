#include<stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

int main()
{	
	int j, t;
	scanf("%d", &t);
	for(j = 1; j <= t; j++)
	{
		int i, n, p, k = 0, op, c;
		struct Node *first;
		struct Node *head;
		struct Node *rear;
		scanf("%d", &n);
		for(i = 0; i <= n - 1; i++)
		{
			scanf("%d", &op);
			if(op == 1 && k == 0)
			{
				c = 0;
				first =  new Node;
				scanf("%d", &p);
				scanf("%d", &first->data);
				head = new Node;
				head = first;
				first->next = NULL;
				rear = new Node;
				rear = first;
				rear->next = NULL;
				k++;
				c++;
				head = first;
				printf("%d\n", head->data);
			}
			else if(op == 1)
			{
				scanf("%d", &p);
				struct Node *nw, *su, *pr;
				pr = new Node;
				su = new Node;
				int count =  0;
				if(p == 0)
				{
					head = first;
					nw = new Node;
					scanf("%d", &nw->data);
					pr = first;
					head = nw;
					head->next = pr;
					first = head;
				}
				else if(p == c)
				{
					head = first;
					nw = new Node;
					scanf("%d", &nw->data);
					head = nw;
					head->next = NULL;
					rear->next = head;
					rear = head;
				}
				else if(p != 0)
				{
					head = first;
					while(head != NULL)
					{
						count++;
						if(count == p)
						{
							pr = head;
						}
						else if(count == p + 1)
						{
							su = head;
						}
						head = head->next;
					}
					nw = new Node;
					scanf("%d", &nw->data);
					pr->next = nw;
					nw->next = su;
				}
				head = first;
				c = 0;
				while(head != NULL)
				{
					if(head->next != NULL)
					{
						printf("%d->", head->data);
					}
					else
					{
						printf("%d", head->data);
					}
					head = head->next;
					c++;
				}
				printf("\n");
			}
			else if(op == 2)
			{
				scanf("%d", &p);
				struct Node *nw, *su, *pr;
				pr = new Node;
				su = new Node;
				int count =  0;
				if(p == c - 1)
				{
					head = first;
					while(head != NULL)
					{
						if(count == c - 2)
						{
							rear = head;
							rear->next = NULL;
							head->next = NULL;
						}
						head = head->next;
						count++;
					}
					pr->next = su;
				}
				else if(p != 0)
				{
					head = first;
					while(head != NULL)
					{
						if(count == p - 1)
						{
							pr = head;
						}
						else if(count == p + 1)
						{
							su = head;
						}
						head = head->next;
						count++;
					}
					pr->next = su;
				}
				else if(p == 0)
				{
					head = first->next;
					first = first->next;
				}
				head = first;
				while(head != NULL)
				{
					if(head->next != NULL)
					{
						printf("%d->", head->data);
					}
					else
					{
						printf("%d", head->data);
					}
					head = head->next;
				}
				printf("\n");
				c = c - 1;
			}
			else if(op == 3)
			{
				int nw;
				scanf("%d %d", &p, &nw);
				int count = 0;
				head = first;
				while(head != NULL)
				{
					if(p == count)
					{
						head->data = nw;
					}
					head=head->next;
					count++;
				}
				head = first;
				while(head != NULL)
				{
					if(head->next != NULL)
					{
						printf("%d->", head->data);
					}
					else
					{
						printf("%d", head->data);
					}
					head = head->next;
				}
				printf("\n");
			}
		}
	}
	return 0;
}
