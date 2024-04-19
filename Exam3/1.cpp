#include <iostream>
using namespace std;

int sum_of_array(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    
    int array_sum = sum_of_array(arr, size);
    cout << "Sum of array elements: " << array_sum << endl;

    return 0;
}
