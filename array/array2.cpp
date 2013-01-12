#include<iostream>
using namespace std;

int main()
{
	int n[10] = {100,3,5,7,9,11,13,15,17,19};
	cout << n[0]+n[7] << " ";
	cout << n[7]+n[1]<< " ";
	cout << n[9]+ n[9] + n[7] << " ";

	cout << n[0]<< " ";
	cout << n[1] << " ";	
	cout << n[2] << " ";

	
	for (int i=0; i<10; i++)
	cout << n[i] << "     ";

	
	return 0;
}
