#include<iostream>
using namespace std;

void printstar()
{
	for (int i=1; i<=5; i++)
	cout << " * * * * * * * " << endl;
}
int main()
{
	printstar();
	int n1,n2;
	cout << "enter first number";
	cin >> n1;
	printstar();
	cout << "enter econd number";
	cin >> n2;
	printstar();
	cout << n1+n2;
	
	return 0;

}
