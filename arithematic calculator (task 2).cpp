
int addition(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

int subtraction(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int product(int p, int q)
{
	int result;
	result = p * q;
	return result;
}

float division(float m, float n)
{
	float result2;
	result2 = (m / n);
	return result2;
}


#include<iostream>
using namespace std;

int main()
{
	char choice;

	do
	{
		cout << "             ARITHEMATIC CALCULATOR" << endl;

		float num1, num2;
		cout << "Enter your First Number: ";
		cin >> num1;
		cout << "Enter your Second Number: ";
		cin >> num2;

		int option;
		cout << "Select the Operation you want to perform." << endl;
		cout << "Press 1 for addition." << endl;
		cout << "Press 2 for subtraction." << endl;
		cout << "Press 3 for multiplication." << endl;
		cout << "Press 4 for division." << endl;
		cout << "Enter your Option: ";
		cin >> option;

		if (option == 1)
		{
			cout << num1 << " + " << num2 << " = " << addition(num1, num2) << endl;
		}

		else if (option == 2)
		{
			cout << num1 << " - " << num2 << " = " << subtraction(num1, num2) << endl;
		}

		else if (option == 3)
		{
			cout << num1 << " * " << num2 << " = " << product(num1, num2) << endl;
		}

		else if (option == 4)
		{
			cout << num1 << " / " << num2 << " = " << division(num1, num2) << endl;
		}

		cout << "Press 'Y' if you want to go to the main menu again. Press 'N' if you want to exit the Calculator.";
			cin >> choice;
			system("cls");

	} while (choice == 'Y');

	if (choice == 'N')
	{
		cout << "Calculator Exited." << endl;
	}

	system("pause");
	return 0;

}