//Write a recursive function to rotate elements 
//in an array to the right by 1 position

#include <iostream>
using namespace std;

void rotateArray(int arr[], int size) {
    if (size <= 1) {
        return;
    }
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    rotateArray(arr, size - 1);
}

int main() {
    int arr[] = {5, 6, 3, 6, 9, 1, 3, 4};
    rotateArray(arr, 8);
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
