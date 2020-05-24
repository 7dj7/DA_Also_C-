# include <iostream>
using namespace std;

struct Node{
	float value;
	Node *link;
};

Node *top = NULL;

bool isempty()
{
	if (top == NULL) return true;
	else return false;
}

void push(float value)
{
	Node *ptr = new Node;
	ptr->value = value;
	ptr->link = top;
	top = ptr;
}

void pop()
{
	if (!isempty())
	{
		Node *ptr = new Node;
		ptr = top;
		top = top->link;
		delete ptr;
	}
	else cout << "Stack is empty\n";
}

void showstack()
{
	Node *temp = new Node;
	temp = top;
	while (temp->link != NULL)
	{
		cout << temp->value << " ";
		temp = temp->link;
		if (temp->link == NULL)
		{
			cout << temp->value;
		}
	}
}

int main()
{
	//Node *elem1 = new Node;
	//elem1->value = 9.8;
	//elem1->link = NULL;
	//top = elem1;
	for (float i = 10.8; i <= 13.9; i++)
	{
		push(i);
	}
	showstack();
	cout << endl;

	pop();
	showstack();

	cout << endl;
	system("pause");
	return 0;
}
