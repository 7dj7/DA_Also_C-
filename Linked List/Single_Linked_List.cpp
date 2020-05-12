# include <iostream>
using namespace std;

struct Node
{
	float value;
	Node *link;
};

Node *head = NULL;

void ShowLinkedList()
{
	Node *temp = new Node();
	temp = head;
	while (temp->link != NULL)
	{
		cout << temp->value << " -----> ";
		temp = temp->link;
		if (temp->link == NULL)
		{
			cout << temp->value << endl;
		}
	} 
}

void AddFront(double data)		//ADD NODE TO THE FRONT OF THE LINKED LIST
{
	Node *new_elem = new Node();
	new_elem->value = data;
	new_elem->link = head;
	head = new_elem;
}

void AddEnd(double data)		//ADD NODE TO THE END OF THE LINKED LIST
{
	Node *new_elem = new Node();
	new_elem->value = data;
	new_elem->link = NULL;
	if (head == NULL)	//this is the first element
	{
		head = new_elem;
	}
	else
	{
		Node *temp = new Node();
		temp = head;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = new_elem;
	}
	
}

int main()
{
	Node *elem_1 = new Node();
	elem_1->value = 10.4;
	elem_1->link = NULL;
	head = elem_1;

	AddFront(9.4);
	AddEnd(11.4);
	ShowLinkedList();

	cout << endl;
	system("pause");
	return 0;
}