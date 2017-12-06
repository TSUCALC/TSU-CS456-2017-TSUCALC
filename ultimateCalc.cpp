#include <iostream>

using namespace std;
string doSomething(string, size_t, size_t);
int main(int argc, char *argv[]) 
{
	string expression;
	cout << "Enter your expression: ";
	cin >> expression;
	const int length = 100;
	// now parse the string, delimetor will be ';'
	int begin = 0;
	string delim = ";";
	size_t found = expression.find(delim);
	string problem;
	string values;
	if(found != string::npos)
	{
		problem= expression.substr(begin, found - begin);
		values = expression.substr(found + 1, expression.size());
		cout << problem << endl;
		cout << values << endl;
	}
	int i = 0;
	while(i != problem.size())
	{
		if(isalpha(problem[i]))
		{
			size_t pos = values.find(problem[i]);
			if(pos != string::npos)
			{
				size_t comma = values.find(',');
				if(comma != string::npos)
				{
					string getVariable = values.substr(pos, comma - pos);
					size_t position = getVariable.find('=');
					if(position != string::npos)
					{
						
					}		
				}		
			}
			
			
//			cout << position << endl;
//			cout << getVariable.size() << endl;
//			cout << getVariable[2] << endl;
			
//			char buffer[10];
//			int k = 0;
//			while(position + 1 != getVariable.size())
//			{
////				cout << getVariable[position + 1];
//				buffer[k] = getVariable[position + 1];
//				position++;
//				k++;
//				
////				cout << intValue << "hello" << endl;
//			}
//			problem.replace(i, strlen(buffer), buffer);
//			cout << problem << endl;
////			cout << buffer << endl;
		}
		i++;
		cout << "next run" << endl;
	}
}
