#include<iostream>
using namespace std;

int main()

{
	
	int n[100];
	for (int i=0; i<100; i++)
	n[i]=200-(2*i);

	for (int i=0; i<100; i++)
	cout << n[i]<< "  ";
	
	cout << n[0]<<  "  ";
	cout << n[77]<<	"  ";
	cout << n[55]<< "   ";
	return 0;
}

