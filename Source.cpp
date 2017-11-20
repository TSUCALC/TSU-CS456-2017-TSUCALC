#include<iostream>
#include<string>
using namespace std; 

int second(int result, char YN)	//Performs second operation
{

	char nenum1t;
	char YN2 = YN;	//initialize YN2 to take in the users second
	int num3;
	

	cout << endl << "What would you like to perform next?";
	cin >> nenum1t;
	cout << endl << "Enter your other number:" << " ";
	cin >> num3;

	if (nenum1t == '+')
	{
		result = result + num3;
	}

	if (nenum1t == '-')
	{
		result = result - num3;
	}

	if (nenum1t == '*')
	{
		result = result * num3;
	}

	if (nenum1t == '/')
	{
		result = result / num3;
	}

	cout << "The answer is:" << " "<< result << endl;
	YN2 = 0;

	cout << "Would you like to continue:" << " " << "Y/N" << " ";
	cin >> YN2;
	if (YN2 == 'y' || YN2 == 'Y')
	{
		second(result, YN2);
	}
	
	else cout << "End of program" << endl;


	return 0;

}



int main()
{
	
	//First function will perform a single operation w/ two variables entered by the user
	
	int num1, num2, result;
	char oper;
	cout << "This program will allow you to perform \n";
		cout << "addtion, subtraction, multiplication, or division";
		cout << "\n one at a time  as many times as you like" << endl;

		cout << endl << "Enter your first number:" << " " << endl;
		cin >> num1;		//First user number

		cout << endl << "Enter +, -, *, or / \t";
		cin >> oper;	//Operation that will be performed

		cout << endl << "Enter your second number:" <<" ";
		cin >> num2;	//Second user number

			if (oper == '+')
			{
				result = num1 + num2;
			}

			if (oper == '-')
			{
				result = num1 - num2;
			}

			if (oper == '*')
			{
				result = num1 * num2;
			}

			if (oper == '/')
			{
				result = num1 / num2;
			}

		cout << "The answer is:" << " " << result << endl;	//Results


		cout << endl << "Do you have more operations? " << " " << "Y/N ";	//Ask user if they want to continue
		
			char YN;
			cin >> YN;
			if (YN == 'y' || YN == 'Y') {
				second(result, YN);	//If YES perform second operation in the 'second' function
			}
			
			 if (YN == 'n' || YN == 'N')
			{
				cout << "No more operations to perform" << endl;	//If NO end the program
			}

		
		
}

