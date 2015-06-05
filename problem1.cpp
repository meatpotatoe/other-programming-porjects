// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <vector>

using namespace std;

// C++ based solution that uses the same algorithm that evan used;
// Expanded a little bit to take any number of multiples in.
int IsolatedCPPSolution2(vector<int> multiples, int max)
{
	int sum = 0;
	for (int i = 0; i < max; ++i)
	{
		for (vector<int>::iterator it = multiples.begin(); it != multiples.end(); ++it)
		{
			if ((i % *it) == 0)
			{
				sum += i;
				break;
			}
		}
	}
	return sum;
}

// C++ based solution that uses the same algorithm that evan used, taking only
// two multiples
int IsolatedCPPSolution1(int mult1, int mult2, int max)
{
	int sum = 0;
	for (int i = 0; i < max; ++i)
	{
		if ((i % mult1 == 0) || (i % mult2 == 0))
			sum += i;
	}

	return sum;
}

int main()
{
		int arr[1000];
		int j = 0;
		long long int sum = 0;
		// 3 & 5 to 1000 add
		cout << "we are running";
		for(int i = 1; i< 1000; i++)
		{
				if (i%3 == 0 || i%5 == 0){
						arr[j] = i;
						j++;
				}
		}
		cout << "\n";
		for(int i = 0; i< j; i++)
		{
				sum += arr[i];
		}
		cout << "The sum from Evan's solution is: " << sum << endl;

		cout << "The sum from the first Boris CPP solution is: " << 
				IsolatedCPPSolution1(3, 5, 1000) << endl;

		vector<int> input = {3,5}; //C++11 only, add the -std=c++11 to the g++ command; good practice for you :)

		// Since we don't go ahead and reuse it, and I want to see how far I can stretch C++11, I got ahead and
		// create a vector on the spot when shoving it into the function. The program eats it up anyway, even
		// though my code editor highlights it and yells about killing babies and shit.
		cout << "The sum from the second Boris CPP solution is: " << 
				IsolatedCPPSolution2(vector<int>{3,5}, 1000) << endl;

		return 0;
}
