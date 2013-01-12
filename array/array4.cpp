#include<iostream>
using namespace std;

int main()

{
	
	int n[10];
	for (int i=0; i<10; i++)
	n[i]=300-(15*i);

	for (int i=0; i<10; i++)
	cout << n[i]<< "  ";
	int total=0;
	for (int i=0; i<10; i++)
	total=total+n[i];
	cout<< total;	
	
		
	return 0;
}

