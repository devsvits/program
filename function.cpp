#include<iostream>
using namespace std;
void multiply(int n1,int n2)
{
	cout << n1*n2;
}
void sum(int n1,int n2)
{
	cout << n1+n2;

}

void printstar()
{
	for (int i=1; i<=4; i++)
	cout << "* * * * * * * * * * " << endl;

}
void table(int n)
{
	for (int i = 1; i <=10; i++ ) 
	cout <<  n*i  <<  "   ";
	cout << endl;
}

void evenodd(int n1)
{
	if (n1%2==0)
	cout << "it's even numbe";
	else
	cout << "it's odd number";
}
void sum()
{
	int n1, n2;
	cout << "enter first number=";
	cin >> n1;
	evenodd(n1);
	cout << "enter second number=";
	cin >> n2;
	evenodd(n2);
	
	cout << n1+n2;
}
int main ()
{
	printstar();
	int n1;
	cout << "enter number=";
	cin >> n1;
	evenodd(n1);
	table(n1);
	printstar();
	sum();
	printstar();
	multiply(n1,20);
	return 0;
}

