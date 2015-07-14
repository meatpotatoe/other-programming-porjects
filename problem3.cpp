//given an array find all pairs that sum to 0

#include <iostream>
using namespace std;
int main()
{
    int curr, temp, mid, rest; 
    int count = 0;
    cout << "enter an number and press enter to end your array enter 'q' or 'Q' " << endl;
    int ints[] = {1,2,3,4,5,-8,-5,-7,-3,-2};
    for(int i = 0; i < 10; i++){        // nice to know what the array is 
        cout << ints[i] << " ";
        count++;
        cout << count << endl;
    }
    cout << endl;
    mid = count/2;
    cout << mid;
    rest = count-1;
    for(int i = 0; i < 10; i++){        // my sort
        for(int j = 0;j < 9; j++){
            if (ints[i] > ints[j]){
                temp = ints[i];
                ints[i] = ints[j];
                ints[j] = temp; 
            }
        }
    }
    cout << endl;
    for(int i = 0; i < 10;i++){         // lets find those pairs
        for(int j = 1;j < 9;j++){
            curr = ints[i] + ints[j];
            if(curr == 0){
                if(i < mid){
                    cout << "these two are a pair that make zero ";
                    cout << ints[i] << " and "<< ints[j] << endl;
                }
            }
        }
    }
    return 0;
}
