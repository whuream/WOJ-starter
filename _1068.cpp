#include<stdio.h>
#include<stdlib.h>
#include<iostream>

typedef struct tag
{
	int val;
	tag *next;
}cell;

int main()
{
	int op,idx,val;
	cell *head=(cell *)malloc(sizeof(cell));
	head->next=NULL;
	while(scanf("%d%d%d",&op,&idx,&val)==3)
	{
		if(1==op)
		{
			int i=0;
			cell *p=head;
			while((i!=idx)&&(p!=NULL))
			{
				p=p->next;
				i++;
			}
			if(p!=NULL)
			{
				cell *tmp=(cell *)malloc(sizeof(cell));
				tmp->next=p->next;
				tmp->val=val;
				p->next=tmp;
			}
		}
		if(2==op)
		{
			int i=0;
			cell *p=head;
			while((i!=idx)&&(p!=NULL))
			{
				p=p->next;
				i++;
			}
			if(p!=NULL) p->val=val;
		}
		if(3==op)
		{
			int i=0;
			cell *p=head;
			while((i!=idx-1)&&(p!=NULL))
			{
				p=p->next;
				i++;
			}
			if(p!=NULL)
			{
				if(p->next!=NULL)
				{
					cell *q=p->next;
					p->next=q->next;
					free(q);
				}
			}
		}
		if(4==op)
		{
			int i=0;
			cell *p=head;
			while((i!=idx)&&(p!=NULL))
			{
				p=p->next;
				i++;
			}
			if(p!=NULL) printf("%d\n",p->val);
		}
	}
	return 0;
}