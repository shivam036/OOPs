#include<iostream>
using namespace std;
int main()
{
	float celsius, fahrenheit;
	cout<<" enter the value of temperature in celsius";
	cin>>celsius;
	fahrenheit = (celsius*9/5)+32;
	cout<<" temperature in fahrenheit"<<fahrenheit;
	cout<<" enter the value of temperature in fahrenheit";
	cin>>fahrenheit;
	celsius = (fahrenheit-32)*5/9;
	cout<<" temperature in celsius"<<celsius;
	return 0;
}
