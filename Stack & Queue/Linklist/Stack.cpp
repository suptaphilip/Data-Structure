#include <iostream>
using namespace std;

class Stack
{
	private: struct node
	{
		int data;
		node* nextAddress;
	};

	private: node* head;

	public: Stack()
	{
		head = NULL;
	}

	public: bool IsEmpty()
	{
		if (head == NULL)
		{
			return true;
		}

		return false;
	}

	public: int size()
	{
		if (head == NULL)
		{
			return 0;
		}	
	}
	
};


int main(int argc, char const *argv[])
{
	Stack obj;

	return 0;
}