#include <iostream>
using namespace std;

int main()
{
	char op;
	double br1, br2, rez;
	//blabla

	cout << "*Welcome to my first calculator*" << endl;
	cout << endl;
	do
	{
		cout << "Enter your equation: " << endl;
		cin >> br1;
		cin >> op;
		cin >> br2;

		cout << endl;
		cout << "Processing... " << endl;
		cout << endl;

	
		if (op == '+')
		{
			rez = br1 + br2;
		}
		else if (op == '-')
		{
			rez = br1 - br2;
		}
		else if (op == '*')
		{
			rez = br1 * br2;
		}
		else if (op == '/')
		{
			rez = br1 / br2;
		}else
		{
			cout << "Invald entering!";
		}

		cout << "Result: " << rez << endl;
		cout << "----------------------------------------" << endl;
		cout << endl;
	}
		
	while (op != 'e');
	return 0;
}


