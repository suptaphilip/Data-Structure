#include <iostream>
using namespace std;


// returning the whole array as pointer

int* bubble_sort(int ar[],int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for(int j = 0; j < size-1-i; ++j)
		{
			if (ar[j] > ar[j+1])
			{
				int temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}

	}

	return ar;
}

void bubble_sort_decending(int ar[], int size)
{

}


int main(int argc, char const *argv[])
{
	cout<<"enter the size of the array"<<endl;

	int n;
	cin>>n;
	int ar[n];

	cout<<"enter the array elements"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cin>>ar[i];
	}

	// catching the whole array

	int *sorted_array = bubble_sort(ar,n);

	// Display

	for (int i = 0; i < n; ++i)
	{
		cout<<sorted_array[i]<<" ";
	}

	cout<<endl;

	return 0;
}