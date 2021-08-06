//Create a circular LL with 5 nodes having char data - vowels - a,e,i,o,u

#include<stdio.h>
#include<stdlib.h> //to access the dynamically allocating memory
struct cll // to create a node
{
	char data;      //data
	struct cll *next; //self refential structure___address
};
typedef struct cll node; // to alter the name
node *first=NULL,*last=NULL;    // initialized null
void create(char ele) //linking
{
	node *new=(node*)malloc(sizeof(node)); // allocating memory
	if(first==NULL)
	{
		new->data=ele;     // to store the address and elements
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
	// to do cll we using do-while
	do
	{
		printf("%c\n",temp->data);//a e i o u
		temp=temp->next;
	}while(temp!=first); // to continue the looping
}
int main()
{
                // creating elements
    create('a');
    create('e');
    create('i');
    create('o');
    create('u');
    display(); // to display the elements
}
