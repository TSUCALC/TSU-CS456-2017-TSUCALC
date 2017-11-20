#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) 
{
	// holds the place of an operator and its weight
	struct holder{
		int position;
		int weight;	
	};
	// vector to hold the expression
	vector<char> expression;
	
	// variable to hold the amount of variables used in the expression
	int count;
	
	// prompt user for how many variables
	cout << "How many variable would you like to use: ";
	cin >> count; 	// count - 1 would be the number of operators in the expression
	
	// intialize a strcuture that will keep track of the order of operations
	holder orderOfOperations [count - 1];
	
	// string to hold the expression given by the user
	string arr;
	
	// prompt for the expression
	cout << "Enter the expression: ";
	
	// user enters expression, we can error check the expression by comparing the length of the array
	// if the array isnt count + count - 1 in length then they probably entered to many variables
	cin >> arr;
	
	// Loop through the expression string and push it into a vector
	for(int i = 0; i < arr.length(); i++)
	{
		expression.push_back(arr[i]);
		
	}
	
	//Loop through the vector and find the positions where an operator exists
	int num = 0;
	for(int i = 0; i < expression.size() ; i++)
	{
		
		// To hold a starting position for the struct array
		if(expression[i] == '/' || expression[i] == '*')
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

//for(int i = 0; i < count - 1; i++)
//{	
//		int spot = orderOfOperations[0].position;
//		int currIndex = 0;
//		int loops = 0;
		int loops = 0;
		while (loops < count - 1) 
		{
			int spot = orderOfOperations[0].position;
			int currIndex = 0;
			
						
				if(orderOfOperations[currIndex].weight < orderOfOperations[loops + 1].weight)
				{
					
					spot = orderOfOperations[loops + 1].position;
					orderOfOperations[loops + 1].weight = 0;
					
					
				}	
				cout << spot << endl;
			loops++;
		}
//}
//	}
	
	
		
		
		
		
		
		/*
		vector<char>::const_iterator num;
		num = expression.begin()
		while (num++ != expression.end()) 
		{
			int a, b;
			switch (expression[i]) 
			{
				case'/':
					int weight = 2;
					orderOfOperation[num][weight];
					break;
				case '*':
					int weight = 2;
				case '+':
					int weight = 1;
				case '-':
					int weight = 1;
			}
		}*/
}