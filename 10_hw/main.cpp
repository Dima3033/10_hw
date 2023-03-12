#include <iostream>
using namespace std;

void array_sp(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *product *= arr[i];
    }
}

int main() {
    int size;
    cout << "Enter the size -> ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " Enter nums ->" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum, product;
    array_sp(arr, size, &sum, &product);

    cout << "Sum -> " << sum << endl;
    cout << "Product -> " << product << endl;

    delete[] arr;  

    return 0;
}
