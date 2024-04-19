#include <iostream>
using namespace std;

void cubeElements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(arr + i * size + j) = (*(arr + i * size + j)) * (*(arr + i * size + j)) * (*(arr + i * size + j));
        }
    }
}

void displayArray(int *arr, int size) {
    cout << "Cubes of array elements:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << *(arr + i * size + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "Enter array's size: ";
   cin >> size;

    int arr[size][size];

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    cubeElements(&arr[0][0], size);

    displayArray(&arr[0][0], size);

    return 0;
}
