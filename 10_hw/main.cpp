#include <iostream>
using namespace std;
int* insert_block(int* arr, int size, int index, int* block, int block_size) {
    int new_size = size + block_size;
    int* new_arr = new int[new_size];
    for (int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
    }
    for (int i = 0; i < block_size; i++) {
        new_arr[index + i] = block[i];
    }
    for (int i = index; i < size; i++) {
        new_arr[block_size + i] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        new_arr[block_size + i] = arr[i];
    }
    delete[] arr;
    return new_arr;
}
int main() {
    int size = 6;
    int* arr = new int[size] {34,75,46,11,2};
    int block_size = 3;
    int* block = new int[block_size] {11,55,87};
    int index = 0;
    arr = insert_block(arr, size, index, block, block_size);
    size += block_size;
    cout << "Result ->" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
