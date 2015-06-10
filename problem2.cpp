#include <iostream>
using namespace std;
int main()
{
long long int arr1[31], arr2[31];
arr1[0] = 1;
arr1[1] = 2;
int count = 0;
for(int i=0; i< 31; i++){
    while(arr1[i]< 4000000){
		cout << "My inner loop passed check, arr[i] is at " << arr1[i] << " and i = " << i << endl;
        arr1[2+i] = arr1[i] + arr1[++i];
		cout << "I've generated a new number, i is now " << arr1[i] << endl;
        cout << arr1[i]<< "\n";
    }
	cout << "I've broken out of the inner loop, my i is at " << i << " right now" << endl;
}
/*
int j=0,sum;
for(int i = 0; i < 50; i++){
    if(arr1[i]%2==0){
        arr2[j] = arr1[i];
        j++;
    }
}
for(int i = 0; i< 10; i++){
sum += arr2[i];
}
cout << sum;*/
return 0;
}
