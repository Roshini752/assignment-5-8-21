#include<stdio.h>
#include<stdlib.h>
struct cll
{
	char data;
	struct cll *next;
};
typedef struct cll node;
node *first=NULL,*last=NULL;
void create(char ele)
{
	node *new=(node*)malloc(sizeof(node));
	if(first==NULL)
	{
		new->data=ele;
		new->next=new;
		first=last=new;
	}
	else
	{
		new->data=ele;
		new->next=first;
		last->next=new;
		last=new;
	}
}
void display()
{
	node *temp=first;
	do
	{
		printf("%c\n",temp->data);//10 20 30
		temp=temp->next;
	}while(temp!=first);
}
int main()
{
    create('a');
    create('e');
    create('i');
    create('o');
    create('u');
    display();
}
