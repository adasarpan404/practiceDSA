// CPP Program to construct an array whose GCD of
// every consecutive element is the given array
#include <bits/stdc++.h>
using namespace std;

// Return the LCM of two numbers.
int lcm(int a, int b)
{
	return (a * b) / __gcd(a, b);
}

// Print the required constructed array
void printArray(int a[], int n)
{
	// printing the first element.
	cout << a[0] << " ";

	// finding and printing the LCM of consecutive
	// element of given array.
	for (int i = 0; i < n - 1; i++)
		cout << lcm(a[i], a[i + 1]) << " ";

	// printing the last element of the given array.
	cout << a[n - 1] << endl;
}

// Driven Program
int main()
{
	int a[] = { 2, 4, 2 };
	int n = sizeof(a) / sizeof(a[0]);
	printArray(a, n);
	return 0;
}
