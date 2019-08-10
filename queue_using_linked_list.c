#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;

struct node *enqueue()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp=start;
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("enter elements in queue\n");
	scanf("%d",&new->data);
	new->next=NULL;

	if(start==NULL)
	{
		start=new;
		return start;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
}

struct node *dequeue()
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		return start;
	}
	else
	{
		printf("%d is deleted\n",temp->data);
		start=temp->next;
		free(temp);
	}
}

struct node *peek()
{
	if(start==NULL)
	{
		return start;
	}
	else
	{
		printf("peek of the Queue is %d\n",start->data);
	}
}
void display()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=start;

	while(temp!=NULL)
	{
		printf("\t%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	int n,i;
	printf("enter size of queue\n");
	scanf("%d",&n);

	

	for(i=0;i<n;i++)
	{
		enqueue();
		display();
		peek();
		dequeue();
		display();
		printf("------------------\n");
	}

return 0;
}
