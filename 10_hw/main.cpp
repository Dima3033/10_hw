#include <iostream>
using namespace std;
int* remove_negatives(int* arr, int size) {
    int* arr_0 = new int[size];
    int size_0 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            arr_0[size_0] = arr[i];
            size_0++;
        }
    }
    int* result = new int[size_0];
    for (int i = 0; i < size_0; i++) {
        result[i] = arr_0[i];
    }
    delete[] arr_0;
    return result;
}
int main() {
    int size;
    cout << "Enter the size of array -> ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " numbers -> ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int* array_1 = remove_negatives(arr, size);
    cout << " bez minusa -> ";
    for (int i = 0; i < size; i++) {
        cout << array_1[i] << " ";
    }
    cout << endl;
    delete[] arr, array_1;
    return 0;
}
