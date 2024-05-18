#include <iostream>
using namespace std;
int main()
{
	int size;
	int evenC = 0;
	int oddC = 0;
	cout << "enter size of th elements you want tp store  : ";
	cin >> size;

	int* arr = new int[size];
	int* newarr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter Input at  "<< i + 1<< " : ";
		cin >> arr[i];
	}
	oddC = size - 1;

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] % 2 == 0) {
			newarr[evenC] = arr[i];
			evenC++;
		}
		else 
		{
			newarr[oddC] = arr[i];
			oddC--;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << newarr[i] << " ";
	}

	return 0;
}

