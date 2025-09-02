#include <iostream>
using namespace std;

void alternatereverse(int arr[], int n) {
    int start = 0;
    int more = 1;
    while (more < n) {
        swap(arr[start], arr[more]);
        start += 2;
        more += 2;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArray[5] = {1, 2, 7, 8, 5};
    int myBraay[3] = {1, 2, 3};

    alternatereverse(myArray, 5);
    alternatereverse(myBraay, 3);

    printArray(myArray, 5);   // Output: 2 1 8 7 5
    printArray(myBraay, 3);   // Output: 2 1 3

    return 0;
}
