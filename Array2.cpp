#include<iostream> // For input and output functions (cin, cout)
using namespace std; // To avoid writing 'std::' before cin, cout

// Function to find the minimum value in an array
int getMin(int num[], int n) {
    // Initialize 'min' with the largest possible 32-bit integer
    int min = INT_FAST32_MAX;

    // Loop through each element in the array
    for(int i = 0; i < n; i++) {
        // If current number is smaller than current min, update min
        if(num[i] < min) {
            min = num[i];
        }
    }
    // Return the smallest value found
    return min;
}

// Function to find the maximum value in an array
int getMax(int num[], int n) {
    // Initialize 'max' with the smallest possible 32-bit integer
    int max = INT_FAST32_MIN;

    // Loop through each element in the array
    for(int i = 0; i < n; i++) {
        // If current number is greater than current max, update max
        if(num[i] > max) {
            max = num[i];
        }
    }
    // Return the largest value found
    return max;
}

int main() {
    int size; // Variable to store the number of elements
    cin >> size; // Take input for size from user

    int num[100]; // Declare an array to store up to 100 integers

    // Input loop: take 'size' number of inputs from user
    for(int i = 0; i < size; i++) {
        cin >> num[i]; // Store each input in the array
    }

    // Call getMax function and print the maximum value
    cout << "Maximum value is " << getMax(num, size) << endl;

    // Call getMin function and print the minimum value
    cout << "Minimum value is : " <<getMin(num, size)<< endl;

return 0;
}