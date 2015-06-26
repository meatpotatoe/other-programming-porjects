#include <iostream>

using namespace std;

int main()
{
    long long int arr1[31] = {1,2};
    long long int arr2[31];
    int count = 0;

    for(int i=0; arr1[2+i] < 4000000 ; i++){
        cout << "My inner loop passed check, arr[i] is " << arr1[i] << " and i = " << i << endl;
        cout << "now adding " << arr1[i] << " to " << arr1[1+i] << " into the element " << arr1[2+i] << endl;
        arr1[2+i] = arr1[i] + arr1[1+i];
        cout << "I've generated a new number, i is now " << arr1[2+i] << endl;
        count++;
    }
    cout << "I'm out of the loop and my i is " << count << endl;

    int j=0,sum = 0;
    for(int i = 0; i < 2+count; i++){
        cout << "this number is being tested " << arr1[i] << endl;
        if(arr1[i]%2==0){
            arr2[j] = arr1[i];
            cout << "this is the number that is going into the second array " << arr2[j] << endl;
            sum += arr2[j];
            cout << "the sum is " << sum << endl;
            j++;
        }
    }
    cout << "this is the sum of the array " << sum << endl;
    return 0;
}
