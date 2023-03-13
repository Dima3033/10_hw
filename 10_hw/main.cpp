#include<iostream>
using namespace std;
int* arri() 
{
	static int a[10]; 
	for (int i = 0; i < 10; i++)
	{
		a[i] = i; 
	}
	return a; 
}
int main()
{
	int* funk;
	int i;
	funk = arri();
	cout << "Array is: ";
	for (i = 0; i < 10; i++)
		cout << funk[i] << "\t";

	return 0;
}