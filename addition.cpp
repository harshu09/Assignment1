#include<iostream>
using namespace std;
struct node
{
	int val;
	struct node *link;

};
class List
{
	node *start;
public:
	List()
	{
		start=NULL;
	}

void insertBeg(int value)
{
	struct node * newnode;
	if(start!=NULL)
	{
		newnode = new node;
		newnode->val=value;
		newnode->link=start;
		start=newnode;

	}
	else if(start==NULL)
	{
		newnode = new node;
		newnode->val=value;
		start=newnode;
		newnode->link=NULL;
	}
}
void traverse()
{
  node *temp;
  temp=start;
  cout<<"\n";
  while(temp!=NULL)
  {
       cout<<" "<<temp->val<<"--->";
       temp=temp->link;
  }
}
void addList(List list1)
{
	int sum1 =0, sum2=0;
	node *temp1, *temp2;
	temp1 = start; temp2 = list1.start;
	while(temp1 !=NULL)
	{
		sum1 = sum1 + temp1->val;
		temp1= temp1->link;
	}
	while(temp2 != NULL)
	{
		sum2 = sum2 + temp2 ->val;
		temp2= temp2->link;
	}

	int listSum = sum1 + sum2;
	cout<<"Sum of all the elements of both the list "<<listSum;

}

};

int main()
{
	int n, m;
	char ch1;
	List list1;
	cout<<"\n Enter the element for first linked list :" ;
	do
	{
		cin>>n;
		list1.insertBeg(n);
		cout<<"\n want to add more (y/n):";
		cin>>ch1;
	}
	while(ch1=='y');
	cout<<"\n First link List is ";
	list1.traverse();
	List list2;
	cout<<"\n Enter the element for second linked list :" ;
	do
	{
		cin>>m;
		list2.insertBeg(m);
		cout<<"\n want to add more (y/n):";
		cin>>ch1;
	}
	while(ch1=='y');
	cout<<"\n Second link List is ";
	list2.traverse();
	 cout<<"\n Sum of above two list :\n";
	 list1.addList(list2);
}
