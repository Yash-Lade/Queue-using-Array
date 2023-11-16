#include<iostream>
#define maxsize 5
using namespace std;

int queue[maxsize],no,rear=-1,i,front=-1;
void insert();
void del();
void display();
int main()
{
	int ch;
	cout<<"\n\t@Author Name - Yash Lade";
	
	
	do
	{
		cout<<"\n\tQueue using Array Menu :\n";
		cout<<"\tPress 1 to insert\n";
		cout<<"\tPress 2 to delete\n";
		cout<<"\tPress 3 to Display \n";
		cout<<"\tPress 4 to exit\n";
		
		cout<<"\tEnter the choice :";
		cin>>ch;
	
	switch(ch)
	{
		case 1:insert();break;
		case 2:del();break;
		case 3:display();break;
		case 4:break;
		default:cout<<"\nWrong Choice\n";
		
	}
	}
	while(ch!=4);
	
}
void insert()
{
	if(rear>=maxsize-1)
	cout<<"\tQueue is full ";
	else
	{
		cout<<"\tEnter the number :";
		cin>>no;
		
		if(rear==-1)
		{
		rear=front=0;
		queue[rear]=no;
	    }
		else
		{
		rear++;
		queue[rear]=no;}
	}
}
void del()
{
	if(front==-1)
	cout<<"\tQueue is empty ";
	else
	{
		cout<<"\tDeleted element is "<<queue[front];
		
		if(front==rear)
		front=rear=-1;
		else
		front++;
	}
}
void display()
{
	if(rear==-1)
	cout<<"\tqueue is empty ";
	else
	{
		cout<<"\tElemets in queue are :\n";
		for(i=front;i<=rear;i++)
		cout<<"\t"<<queue[i];
	}
}
