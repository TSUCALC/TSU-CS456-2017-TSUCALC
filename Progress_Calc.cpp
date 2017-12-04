#include "CALCULATOR_H"

using namespace std;

struct Holder {
	int position;
	int weight;
	
};
int countOpeators(string exp)
{
	int count = 0;
	int i = 0;
	while(i < exp.length())
	{
		if(exp[i] == '/' || exp[i] == '*' || exp[i] == '+' || exp[i] == '-')
		{
			count++;
		}
		i++;
	}
	return count;
}
Holder assignWeights(string exp)
{
	int count = countOpeators(exp);
	Holder orderOfOperations[count];
	int num = 0;
	for(int i = 0; i < exp.length(); i++)
	{
		if(exp[i] == '/' || exp[i] == '*')
		{
			int weight = 2;
			orderOfOperations[num].position = i;
			orderOfOperations[num].weight = weight;
			num++;
		} else if(expression[i] == '+' || expression[i] == '-')
		{
			int weight = 1;
			orderOfOperations[num].position = i;
			orderOfOperations[num].weight = weight;
			num++;
		}	
	}
	return orderOfOperations;
}
getOperands(int position, string exp)
{
	char lhs;
	char rhs;
	int temp = position;
	int lhsBegin = 0;
	int rhsBegin = 0;
	while (exp[position - 1] =! '/' || exp[position - 1] =! '*' || exp[position - 1] =! '-' || exp[position - 1] =! '+' || exp[position - 1] =! exp.begin()) 
	{
		lhs[lhsBegin] = exp[position - 1];
		position++;
	}
	while(exp[temp + 1] =! '/' || exp[temp + 1] =! '*' || exp[temp + 1] =! '-' || exp[temp + 1] =! '+' || exp[temp + 1] =! ';')
	{
		rhs[rhsBegin] = exp[temp +1]
		temp++;
	}
	// I STOPPED HERE
	// NEED TO FIND THE VALUES OF THE LHS AND RHS
}
findOperation(string exp)
{
	int count = countOpeators(exp);
	Holder * order = assignWeights(exp);
	int i = 0;
	while (i < count - 1) 
	{
		int spot = order[0].position;
		int currIndex = 0;
		if(order[currIndex].weight <= order[i + 1].weight)
		{
			spot = order[i + 1].position;
			callfunctoin
			order[loops + 1].weight = 0;
		}	
	}
}
string getExpression()
{
	string expression;
	cout << "Enter the expression: ";
	cin >> expression;
	return expression;
}
string getVariables(string exp)
{
	int i = 0;
	string varExpression;
	while(exp[i] != ';')
	{
		varExpression[i] = exp[i];
	}
	return varExpression;
}
string getValues(string exp)
{
	int spot = 0;
	int i = 0;
	string values;
	while (exp[i] != ";") 
	{
		spot++;
	}
	int arrStart = 0;
	for(int j = spot; spot < exp.length(); spot++)
	{
		values[arrStart] = exp[j];
		arrStart++;
	}
	return values;
}
