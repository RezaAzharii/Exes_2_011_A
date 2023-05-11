#include <iostream>
using namespace std;

int Reza[7];
int n;
int i;

void input()
{

	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n >= 0) && (n <= 7))
			break;
		else 
			cout << "\nArray should have minimum 0 and maximum 7 elements.\n\n";
	}
	cout << "\n=========================\n";
	cout << " Masukan Element Array : \n";
	cout << "\n=========================\n";

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> Reza[i];

	}
}


void sistem() 
{
	int low = 0;
	int up = n - 1;
	int mid = (low + up) / 2;

	do
	{
		if (Reza[mid] == n) {
			cout << "found" << endl;
		}
		

	} while (low <= up);

}

int main() 
{
	input();
	sistem();
}