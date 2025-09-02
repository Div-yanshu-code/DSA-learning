#include<iostream>
using namespace std;

int main() {
    int n;

    // Ask user how many elements they want to input
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Take input for the array elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize sum variable
    int sum = 0;

    // Calculate the sum of array elements
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the result
    cout << "Sum of elements = " << sum << endl;

    return 0;
}
