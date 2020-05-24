# include <iostream>

using namespace std;

# define SIZE 5

int top = -1;
int stack[SIZE];

bool isempty()
{
	if (top == -1) return true;
	else return false;
}

void push(int value)
{
	if (top == SIZE - 1)
	{
		cout << "Stack is full \n";
	}
	else
	{
		top += 1;
		stack[top] = value;
	}
}

void pop()
{
	if (isempty()) cout << "Stack is empty \n";
	else --top;
}

void showstack()
{
	if (isempty()) cout << "Stack is empty\n";
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << stack[i]<<", ";
		}
	}
}

int main()
{
	for (int i = 9; i <= 12; i++)
	{
		push(i);
	}
	
	showstack(); cout << endl;
	pop(); pop();
	showstack();

	cout << endl;
	system("pause");
	return 0;
}
