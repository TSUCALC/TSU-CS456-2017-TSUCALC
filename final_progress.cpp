#include <iostream>
#include <vector>

struct Holder{
		int position;
		int weight;	
};

std::string getExpression()
{ // gets the expression from the user
	
	std::string expression;
	std::cout << "Enter the expression: ";
	std::cin >> expression;
	return expression;
}
std::vector<char> * problem(std::string express)
{ // takes the expression from the user and places it into a vector
  // the vector only takes the actual problem of the statement
	int i = 0;
	std::vector<char> * expression;
	while(express[i] != ';')
	{
		expression->push_back(express[i]);
	}
	return expression;
}
std::vector<char> * values(std::string express)
{ // takes the expression from the user and places it into a vector
  // vector takes values of variables statement
	
	int spot = 0; // tracks the place where problem stops and variable definitions begin
	int i = 0;
	std::vector<char> * expression;
	while (express[i] != ';') 
	{ // loop through till we are no longer looking at the problem, want the variable defintions
		spot++;
		i++;
	}
	// loop through string and place it into a vector that'll hold variable definitions
	for(int j = spot; spot < express.length(); spot++)
	{
		expression->push_back(express[spot]);
	}
	return expression;
}
int countOpeators(std::vector<char> * expression)
{ // takes the problem part of the expression, searches for how many operators their are and returns
  // that value
	
	int count = 0; // holds the amount of operators
	int i = 0;
	
	while(i < expression->size())
	{ // loop through each element if it is an operator increment the variable
	
		if(expression[i] == '/' || expression[i] == '*' || expression[i] == '+' || expression[i] == '-')
		{
			count++;
		}
		i++;
	}
	return count;
}
Holder assignWeights(std::vector<char> * expression)
{ // function to assign weights to the operators to provide the fucntionality
  // of operator precdence

	int count = countOpeators(expression); // get the # of operators
	struct Holder orderOfOperations[count]; 
	int num = 0;
	for(int i = 0; i < expression->size(); i++)
	{
		// multiply and divide are given the weight of 2
		if(expression[i] == '/' || expression[i] == '*')
		{
			int weight = 2;
			orderOfOperations[num].position = i;
			orderOfOperations[num].weight = weight;
			num++;
		}
		// addition and subtraction are given the weight of 1 
		else if(expression[i] == '+' || expression[i] == '-')
		{
			int weight = 1;
			orderOfOperations[num].position = i;
			orderOfOperations[num].weight = weight;
			num++;
		}	
	}
	return orderOfOperations;
}
findOperation(std::vector<char> * expression)
{
	
	int count = countOpeators(expression);
	Holder * order = assignWeights(expression);
	int k = 0;
	int increment = 0;
	int spot;
	
	while (increment < count - 1) 
	{
		// looops through the operators in the problem to 
		// see if any are multiply or divide
		// if so then save the spot and then grab
		// left hand side and right hand side of the operator and perform calculation
		while(k < count - 1)
		{
			if(orderOfOperations[k].weight == 2)
			{
				spot = orderOfOperations[k].position;
				// Call left right operand function
				orderOfOperations[k].weight = 0;
				std::cout << spot << std::endl;
			}
			k++;
		}
		int j = 0;
		while(j < count - 1)
		{
			if(orderOfOperations[j].weight == 1)
			{
				spot = orderOfOperations[j].position;
				orderOfOperations[j].weight = 0;
				cout << spot << endl;	
			}
			j++;
		}
		increment++;
	}

}
int * getOperands(int position, std::vector<char> * expression)
{
	string lhs;
	string rhs;
	int temp = position;
	int lhsBegin = 0;
	int rhsBegin = 0;
	while (expression[position - 1] != '/' || expression[position - 1] != '*' || expression[position - 1] != '-' || expression[position - 1] != '+' || position != 0) 
	{
		lhs[lhsBegin] = expression[position - 1];
		position--;
	}
	while(expression[temp + 1] != '/' || expression[temp + 1] != '*' || expression[temp + 1] != '-' || expression[temp + 1] != '+' || expression[temp + 1] != ';')
	{
		rhs[rhsBegin] = expression[temp + 1]
		temp++;
	}
	std::vector<char> * variables = values();
	int  * values = getValues(variables, lhs, rhs);
	return values;
}
int * getValues(std::vector<char> * expression, string lhs, string rhs)
{
	string lhs_Value_s;
	string rhs_Value_s;
	int lhsValue;
	int rhsValue;
	for(int i = 0; i < expression.size(); i++)
	{
		if(expression[i] == lhs[i])
		{
			int j = i;
			while(exp[j] != ',' || j != expression.end())
			{
				lhs_Value_s = expression[j];
			}
			if(isdigit(lhs_Value_s[0])
			{
				lhsValue = atoi(lhs_Value_s)
			} 
			break;
		}	
	}
	for(int i = 0; i < exp.length(); i++)
	{
		if(exp[i] == rhs[i])
		{
			int j = i;
			while(exp[j] != ',' || j != exp.end())
			{
				rhs_Value_s = exp[j];
			}
			if(isdigit(rhs_Value_s[0])
			{
					rhsValue = atoi(rhs_Value_s)
			} 
			break;
		}	
	}
	int returnValues[2] = {lhsValue, rhsValue};
	return returnValues;
}
int main()
{
}


