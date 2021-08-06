#include<stdio.h>
#include<stdlib.h>
struct sll
{
        int data;
        struct sll *next;

};
typedef struct sll node;
node*first=NULL,*last=NULL;
void create(int ele)
{
        node*new=(node*)malloc(sizeof(node));
        if(first==NULL)
        {
                new->data=ele;
                new->next=NULL;
                first=last=new;
        }
        else
        {
                new->data=ele;
                new->next=NULL;
                last->next=new;
                last=new;
        }

}
void display()
{
        node*temp=first;
        while(temp!=NULL)
        {
                printf("%d\n",temp->data);
                temp=temp->next;
        }
}
void create_front(int ele)
{
        node*new=(node*)malloc(sizeof(node));
        new->data=ele;
        new->next=first;
        first=new;
        printf("after creating frot node\n");
}
void create_last(int ele)
{
        node*new=(node*)malloc(sizeof(node));
        new->data=ele;
        new->next=NULL;
        last->next=new;
        last=new;
}
void middle_node(int ele)
{
        int key;
        printf("enter the key\n");
        scanf("%d",&key);
        node*temp=first,*temp1;
        while(temp->data!=key)
        {
        temp1=temp;
        temp=temp->next;
        }
        node*new=(node*)malloc(sizeof(node));
        new->data=ele;
        new->next=temp;
        temp1->next=new;
}
void del_front()
{
        node*temp=first;
        first=first->next;
        free(temp);
}
void del_last()
{
        node*temp=first,*temp1;
        while(temp!=last)
        {
        temp1=temp;
        temp=temp->next;
        }
        last=temp1;
        last->next=NULL;
        free(temp);
}
void del_middle()
{
        int key;
        printf("enter the key\n");
        scanf("%d",&key);
        node*temp=first,*temp1;
        while(temp->data!=key)
        {
        temp1=temp;
        temp=temp->next;
        }
        temp1->next=temp->next;
        free(temp);
}

int main()
{
        //display();
        create(10);
        create(20);
        create(30);

        create_front(5);
        printf("after creating front node\n");
        display();
        create_last(40);
        display();  
        middle_node(50);

        display();
        del_front();
        display();
        del_last();
        display();
}


