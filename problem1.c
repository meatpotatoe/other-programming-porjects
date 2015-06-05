// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;
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
    cout << sum << "\n";

    return 0;
}
