#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num, result;
  cout << "Enter any number : ";
  cin >> num;
  result = pow(num, 1.0/3.0);
  cout << "Cube root of " << num << " is: " << result;
}