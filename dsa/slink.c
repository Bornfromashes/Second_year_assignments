#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
void create(struct node **);
void addbeg(struct node **);
int addafter(struct node **);//function declaration
void display(struct node **);
void del(struct node **);
void count(struct node **);
void revert(struct node **);
int main()
{
	struct node *p;
	p=NULL;
	printf("create new list\n");
	int a;
	do
	{
		hello:
		printf("add node:\n");
		create(&p);
		printf("do want to add more node press 1\n");
		scanf("%d",&a);
	}while(a==1);
	int b;
	do
	{
		printf("what you want to do now\n1.add node at end\n2.add node at begin\n3.add node at after certain location\n4.delete node\n5.count number of node\n6.display list\n7.revert list\n8.exit\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
		goto hello;
		break;
		case 2:
		addbeg(&p);
		break;
		case 3:
		addafter(&p);
		break;
		case 4:
		del(&p);
		break;
		case 5:
		count(&p);
		break;
		case 6:
		display(&p);
		break;
		case 7:
		revert(&p);
		
		}
		
	}while(b!=8);
}
		
void create(struct node **q)//create the list
{
	struct node *temp;
	struct node *r;
	int num;
	if(*q==NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));	
		printf("enter number want to add:\n");
		scanf("%d",&num);
		temp->data=num;
		temp->link=NULL;
		*q=temp;
	}
	else
	{
		temp=*q;
		while(temp->link!=NULL)
		temp=temp->link;
		
		r=(struct node *)malloc(sizeof(struct node));	
		printf("enter number want to add:\n");
		scanf("%d",&num);
		r->data=num;
		r->link=NULL;
		temp->link=r;
	}
}
void display(struct node **q)//display the list
{
	struct node *temp;
	temp=*q;
	printf("number in the list are as follow:\n");
	while((*q)!=NULL)	
	{
		printf("%d",(*q)->data);
		(*q)=(*q)->link;
		printf("\n");
	}
	*q=temp;
}	
void addbeg(struct node **q)//add at the begining of the list
{
	struct node *temp,*r;
	int num;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter number want to add at begin:\n");
	scanf("%d",&num);	
	temp->data=num;
	temp->link=*q;
	*q=temp;
}
int addafter(struct node **q)//add after certain location in list
{
	struct node *temp,*r;
	int loc,num,i;
	printf("enter the location you want to after add a certain number:\n");
	scanf("%d",&loc);
	temp=*q;
	for(i=0;i<loc-1;i++)	
	{
		if(temp==NULL)
		{
		printf("location not found\n");
		return 0;
		}
		else
		temp=temp->link;
	}
	printf("enetr the number you want to add:\n");
	scanf("%d",&num);
	r=(struct node *)malloc(sizeof(struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}
void del(struct node **q)//delete particulate from list
{
	struct node *temp,*old;
	temp=*q;
	int num;
	if(temp==NULL)
	{
		printf("list is empty");
	}
	printf("enter the number you want to delete:\n");
	scanf("%d",&num);
	while(temp!=NULL)
		{
			if(temp->data==num)
				{
					old->link=temp->link;
					free(temp);
				}
			else
				{
					old=temp;
					temp=temp->link;
				}
    }
}
void count(struct node **q)//number of element in the list
{
	struct node *temp;
	temp=*q;
	int count=0;
	while(*q!=NULL)
		{
			(*q)=(*q)->link;
			count++;
		}
	printf("total element are: %d\n",count);
	*q=temp;
}
void revert(struct node **q)//revert the list
{
	struct node *temp,*r,*s;
	temp=*q;
	r=NULL;
	while(temp!=NULL)
	{
		s=r;
		r=temp;
		temp=temp->link;
		r->link=s;
	}
	*q=r;
}
		
						
		
		
		
	
	

