#include <iostream>
using namespace std;

// 4. 
extern int a;
extern int b;
extern int c;
extern int d;



int main()
{
	// 1. 
	cout << "1. a * (b + (c / d)) = " << a * (b + (static_cast <float> (c) / d)) << endl << endl;


	// 2.
	cout << "2." << endl;

	int n;

	cout << "Enter number: ";

	cin >> n;

	int res = (n <= 21) ? 21 - n : 2 * (n - 21);

	cout << "Result: " << res << endl << endl;


	// 3.
	int arr[3][3][3], *ptr;

	ptr = & arr[1][1][1];

	cout << "3. arr[1][1][1] = " << *ptr << endl;
}