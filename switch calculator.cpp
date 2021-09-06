#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	
cout<<"please enter the operator which you want to use ";
	cin>>op;
	
	cout<<"please enter the two number for which operator required ";
	cin>>num1>>num2;
	
	switch(op)
	{
     case'+':
		cout<<num1+num2;
		break;
	case'-':
	    cout<<num1-num2;
	    break;
	 case'*':
	    cout<<num1*num2;
		break;
	case'/':
	    cout<<num1/num2	;
		break;
	default:
	cout<<"wrong opertor entered by you";
	break;		   
		
	}
	return 0;
}
