#include <iostream>
#include <sstream>

using namespace std;
int main(int argc, char *argv[]) 
{
	
	string expression;
	cout << "Enter the expression: ";
	cin >> expression;
	char oper;
	bool status = true;
	int i = 0;
	string lhs;
	string rhs;
	int lhsVal;
	int rhsVal;
	while(status)
	{
	
		if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
		{
			oper = expression[i];
			status = false;
//			cout << oper << endl;
			for(int z = i - 1; z == 0; z--)
			{
//				cout << expression[z] << endl;
				lhs[z] = expression[z];
			}
			int k = i + 1;
			int holder;
			while(expression[k] != ';')
			{
//				cout << expression[k] << endl;
				rhs[k] = expression[k];
				k++;
				holder = k;
				
			}
			int lhsPosition = holder + 3;
			int rhsPosition = lhsPosition + 4;
			char temp = expression[lhsPosition];
			char temp2 = expression[rhsPosition];
			cout << temp << endl;
			string tempString(1, temp);
			string tempString2(1, temp2);
			stringstream nums(tempString);
			stringstream nums2(tempString2);
			nums >> lhsVal;
			nums2 >> rhsVal;
			cout << lhsVal << endl;
			cout << rhsVal << endl;
			
			
			
		}
		i++;
	}
	
}