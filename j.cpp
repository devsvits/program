#include<iostream>
using namespace std;

void evenodd (int n1)
{
	if (n1%2==0)
	cout<< "it's even number";
	else
	cout<< "it's odd number";

}
void printstar()
{
	for(int i=1; i<=4; i++)
	cout << "* * * * * *"<< endl;
}

void table(int n)
{
	for (int i=1; i<=10; i++)
	cout << n*i<< endl;
}
void count()
{
	for (int i=0; i<=20; i++)
          cout << i <<endl ;
}
int main()
{
	count();
        printstar();
	int n1,n2;
	cout << "enter first number=";
	cin >> n1;
	printstar();
	table(n1);
	evenodd(n1);
	cout << "enter second number=";
	cin >> n2;
	printstar();
	table(n2);
	evenodd(n2);
	cout << n1*n2;
	return 0;
}

