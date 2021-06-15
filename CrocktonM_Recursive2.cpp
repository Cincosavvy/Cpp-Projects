#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int MPC_sumN8 (int n);
int MPC_sumSquareN7 (int n);
double MPC_sumSquareRootN1 (double n);
double MPC_expoBaseN6 (double n, double base);
int MPC_factorialN8 (int n);
double MPC_sumPowerN7 (double n, double k);

int main ()
{
	
	char choice;
	int n;
	double power;
	double base;
	
	while(choice != 'G' || choice != 'g')
	{
		   //Print Statements
         cout << "\nChoose from the following: " << endl;
         cout << "\tA for Sum " <<endl;
         cout << "\tB for Sum Square" <<endl;
         cout << "\tC for Sum Square-root " <<endl;
         cout << "\tD for Exponential " <<endl;
         cout << "\tE for Factorial " <<endl;
         cout << "\tF for Sum power " <<endl;
         cout << "\tG to exit " <<endl;
		   cin >> choice;
		//Choice A - Sum
		if (choice == 'A')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "The sum of " << n << " is " << MPC_sumN8(n) << endl;
		}
      //Choice B - Sum of Squares
		else if (choice == 'B')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "The sum square of " << n << " is " << MPC_sumSquareN7(n) << endl;
		}
      
      //Choice C - Sum Square-Root
		else if (choice == 'C')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "The sum square-root of " << n << " is " << MPC_sumSquareRootN1(n) << endl;
		}
      //Choice D - Exponential Base
		else if (choice == 'D')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "Enter the value of the base: ";
			cin >> base;
			cout << base << " raised to " << n << " is " << MPC_expoBaseN6(n, base) << endl;
		}
      //Choice E - factorial
		else if (choice == 'E')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "The factorial of " << n << " is " << MPC_factorialN8(n) << endl;
		}
      //Choice F - Power
		else if (choice == 'F')
		{
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "Enter the value of the power: ";
			cin >> power;
			cout << "The sum of 1 to " << n << " using power " << power << " is " << MPC_sumPowerN7(n, power) << endl;
		}
		else {
			return 0; //case 'G'
		}
		
	}
	return 0;
} 
	
//Sum 
int MPC_sumN8 (int n) 
{
	if (n == 1)
	{
		return 1;
	}
	else 
	{
		return n + MPC_sumN8(n-1);
	}
}

//Sum Square
int MPC_sumSquareN7 (int n)
{
	if (n == 1)
	{
		return 1;
	}
	else 
	{
		return pow(n,2) + MPC_sumSquareN7(pow((n-1),2));
	}
}

//Sum Square Root
double MPC_sumSquareRootN1 (double n)
{
	if (n == 1)
	{
		return 1;
	}
	else 
	{
		return pow(n,.5) + MPC_sumSquareRootN1(pow((n-1),.5));
	}
}

//Exponential Function
double MPC_expoBaseN6 (double n, double base)
{
	if (n == 0)
	{
		return 1;
	}
	else 
	{
		return base * MPC_expoBaseN6(n-1, base);
	}
}

//Factorial Function
int MPC_factorialN8 (int n)
{

	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * MPC_factorialN8(n-1);
	}
	
}
//Sum Power Function
double MPC_sumPowerN7 (double n, double power)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n * pow(n, power-1)) + MPC_sumPowerN7(n-1, power);
	}
}