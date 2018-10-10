/*

Farhan Pushan




Task A. Is divisible?

Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);

If n is divisible by d, the function should return true, otherwise return false.
For example:

isDivisibleBy(100, 25) == true

isDivisibleBy(35, 17) == false

The program should also have a main function that tests your code. For example, it can ask the user to input two integer numbers and print Yes if the first number is divisible by the second, otherwise print No.

*/





#include <iostream>

using namespace std;


bool isDivisibleBy(int n, int d)
{

if (d == 0)

	{return false;}
		
	if ( n % d == 0)
	{
		return true;
	} 
	else
	{
		return false;
	}
	
}


int main()
{
	//int input = isDivisibleBy(100,0);
		
	
	int firstnum, secnum;	
		
	cout << "Enter integer:" << endl;
	
	cin >> firstnum;
	
	cout << "Enter integer:" << endl;
	
	cin >> secnum;
	
	int input = isDivisibleBy(firstnum , secnum);
	
	cout << endl;
	
	//cout << input << endl;
	
	if(input == 1)
	
	{
		cout << "Yes" << endl;
	}
	
	else
	{
		cout << "No" << endl;
	}
	
	
	
	
	
	
	
}

