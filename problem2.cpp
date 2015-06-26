#include <iostream>

using namespace std;

int main()
{
    long long int arr1[31] = {1,2};
    long long int arr2[31];
    int count = 0;

    for (int i = 0; arr1[2+i] < 4000000 ; i++) {
        arr1[2+i] = arr1[i] + arr1[1+i];
        count++;
    }

    cout << "Generated: " << count + 2 << " #s" << endl;

    int j=0, sum = 0;
    for (int i = 0; i < count + 2; i++) {

        cout << "Testing: " << arr1[i] << "%2 == 0" << endl;

        if (arr1[i]%2 == 0) {
            arr2[j] = arr1[i];
            cout << "arr2[" << j << "] = " << arr2[j] << endl;
            sum += arr2[j];
            cout << "Sum is now: " << sum << endl;
            j++;
        }
    }
    cout << "Final sum: " << sum << endl;
    return 0;
}
