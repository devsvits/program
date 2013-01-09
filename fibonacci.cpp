#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "enter number=";
	cin >> n;
	int n1=0, n2=1;
	cout << n1 << "  ";
	cout << n2 << "  ";
	for (int i = 3; i<=n; i++ )
	{	
		cout << n1+n2 <<  "   ";
		int temp = n1;
		n1=n2;
		n2=n1+temp;
		
	}
	return 0;


}
