 

#include <iostream>
#include <vector>
using namespace std;

int findSpecialInteger(vector<int>& arr) {

    int count = 0;
    int previous_value = arr[0] - 1;
    for (int value : arr) {
        if (previous_value == value) {
            count++;
        }
        else {
            if (count > arr.size() / 4) {
                return previous_value;
            }
            count = 1;
            previous_value = value;
        }
    }
    if (count > arr.size() / 4) {
        return previous_value;
    }
    return -1;
}


int main()
{
    vector<int> arr = { 1, 2, 2, 6, 6, 6, 6, 7, 10 };
    cout << findSpecialInteger(arr) << endl;

} 