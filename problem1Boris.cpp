// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
// This is provided as an example of some "cleaner" code, although the algorithmic solution is not necessarily the best.

#include <iostream>

using namespace std;

const int MULT1 = 3;
const int MULT2 = 5;
const int MAX = 1000;

int Sum(int multiple, int max)
{
	int sum = 0;
	for (int x = multiple; x < max; x += multiple)
	{
		sum += x;
	}
	
	return sum;
}

int main()
{
	int sum = 0;
	sum += Sum(MULT1, MAX);
	sum += Sum(MULT2, MAX);
	sum -= Sum(MULT1*MULT2, MAX);

	cout << "The sum of all multiple of " << MULT1 << " and " <<
			MULT2 << " below " << MAX << " is: " << sum << endl;

	return 0;
}
