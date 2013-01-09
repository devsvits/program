#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3, n4;
	cout << "enter first number=";
	cin >> n1;
	cout << "enter second number=";
	cin >> n2;
	cout << "enter third number=";
	cin >> n3;
	cout << "enter forth number=";
	cin >> n4;
	if (n1>n2 && n1>n3 && n1>n4)
		cout << "n1 is largest" ;
	else
	if (n2>n1 && n2>n3 && n2>n4) 
		cout << "n2 is largest" ;
	else
	{
	if (n3>n2 && n3>n1 && n3>n4)
		cout << "n3 is largest" ;
	else
	  	cout << "n4 is largest" ;
	}
	return 0;
}







