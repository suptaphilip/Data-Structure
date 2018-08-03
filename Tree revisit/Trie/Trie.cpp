#include <iostream>
#include <cstring>
using namespace std;

class Trie
{
	private: struct node
	{
		bool endmark;
		node* next[26+1];

		node()
		{
			endmark = false;

			for (int i = 0; i < 27; ++i)
			{
				next[i] = NULL;
			}
		}
	};

	private: node* root = new node();

	private: void MakeLower(char* str, int length)
	{
		for (int i = 0; i < length; ++i)
		{
			if (str[i] > = 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}

	public: void Insertion(char* str, int length)
	{
		MakeLower(str, length);

		node* travel = root;

		for (int i = 0; i < length; ++i)
		{
			int id = str[i] - 'a';

			if (travel -> next[id] == NULL)
			{
				travel -> next[id] = new node();
			}

			travel = travel -> next[id];	
		}

		travel -> endmark = true;
	}

	public: bool Search(char* str, int length)
	{
		MakeLower(str, length);

		node* travel = root;

		for (int i = 0; i < length; ++i)
		{
			int id = str[i] - 'a';

			if (travel -> next[id] == NULL)
			{
				return false;
			}

			travel = travel -> next[id];
		}

		return travel -> endmark;
	}

	private: void del(node* travel)
	{
		for (int i = 0; i < 27; ++i)
		{
			if (travel -> next[i])
			{
				del(travel -> next[i]);
			}
		}

		delete(travel);		
	}

	public: void Delete()
	{
		del(root);
	}
};


int main(int argc, char const *argv[])
{
	
	return 0;
}