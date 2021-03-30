#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int j,un_list[10],temp;
	srand((unsigned)time(NULL));

	//generating an array of random numbers
	for (int i = 0; i < 10; i++)
	{
		j = (rand() % 10) + 1;
		un_list[i] = j;
	}

	cout << "The un-ordered list:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << un_list[i] << "   ";
	}
	cout << endl;

	

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (un_list[j] > un_list[j + 1])
			{
				temp = un_list[j+1];
				un_list[j+1] = un_list[j];
				un_list[j] = temp;
			}
			else;
		}

	}
	cout << "List in ascending order:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << un_list[i] << "   ";
	}



	cout << "\nList in descending order:\n";
	for (int i = 9; i >=0; i--)
	{
		cout << un_list[i] << "   ";
	}
	cout <<endl<< endl;
	return 0;

}