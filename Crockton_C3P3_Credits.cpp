#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double calcBalance(double startBalance, double charges, double credits);

int main ()
{
	int accountNumber = 0;
	double startBalance;
	double charges;
	double credits;
	double creditLimit;
	
	do
	{
		cout << "Enter Account Number (or -1 to quit): ";
		cin >> accountNumber;
		
		if (accountNumber == -1)
		{
			break;
		}
		
		cout << "Enter beginning balance: ";
		cin >> startBalance;
		
		cout << "Enter total charges: ";
		cin >> charges;
		
		cout << "Enter total credits: ";
		cin >> credits;
		
		cout << "Enter credit limit: ";
		cin >> creditLimit;
		
		double newBalance = calcBalance(startBalance, charges, credits);
		
		cout << "New balance is $" << newBalance << endl;
		
		if (newBalance >= creditLimit)
		{
			cout << "Account: \t" << accountNumber << endl;
			cout << "Credit limit: \t" << creditLimit << endl;
			cout << "Balance: \t" << newBalance	<< endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		
		cout << "\n";

	} while (accountNumber != -1);
	
	return 0;	
} 
		
double calcBalance(double startBalance, double charges, double credits)
{
	return (startBalance + charges) - credits;
}
		