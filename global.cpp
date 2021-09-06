#include<iostream>
using namespace std;
int result,a,b;
void mul(); void div(); void add(); void sub(); void mod();
int main()
{
	
	cout<<"\n enter value of a";
	cin>>a;
	cout<<"\n enter value of b";
	cin>>b;
	add(); mul(); div(); sub(); mod();
	return 0;
};
void mul() {result = a*b ; cout<<"\n mul is\t"<<result;}
void add() {result = a+b ; cout<<"\n add is\t"<<result;}
void sub() {result = a-b  ; cout<<"\n sub is\t"<<result;}
void div() {result = a/b  ; cout<<"\n div is\t"<<result;}
void mod() {result = a%b  ; cout<<"\n mod is\t"<<result;



