#include<iostream>
#include<cmath>
using namespace std;

//This is a simple two digit calculator
int main()
{
	double x, y, result; //1st and 2nd numbers and the result
	char oper;	//the operator 
	cout << "Enter your two digit expression or exponent" << endl;
	cin >> x >> oper >> y;
	

	//the switch case will look at the operator and perform the proper operation 
	// depending on the user's input operator
	
	switch (oper)
	{
	case '+':
		 result = x + y;
		
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
	case '^':
		result = pow(x,y);
		break;

	default: //if the user did not input a proper operator a error message will be displayed.
		cout << "You entered an incorrect operator" << endl;	
	}
	cout << "The answer is:" << " " << result << endl;

    return 0;
}

