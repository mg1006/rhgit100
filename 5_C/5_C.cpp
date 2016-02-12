// Multiplication Table
// Bhaskar Baskota 

#include <iostream>
using namespace std;

int main()
{
	int x;
	const int MAX_MUL_VALUE = 21;
	int table [MAX_MUL_VALUE] [MAX_MUL_VALUE] = {0};

	cout << "How many multiplcation table do you want too see? (max of 20)" << endl;
		cin >> x;
		
		//assigning  elements
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			table[i] [j] = i * j;
		}
	}
	//printing the table
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			cout << table[i][j] << '\t';
		
		}
		cout << "\n" << endl;
	}
	system("pause");
	return 0;
}
 





