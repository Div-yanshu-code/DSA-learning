#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int key = 0;
    if (num % 3 == 0) key += 1;
    if (num % 5 == 0) key += 2;

    switch (key) {
        case 0:
            cout << num << " is not divisible by 3 or 5." << endl;
            break;
        case 1:
            cout << num << " is divisible by 3 only." << endl;
            break;
        case 2:
            cout << num << " is divisible by 5 only." << endl;
            break;
        case 3:
            cout << num << " is divisible by both 3 and 5." << endl;
            break;
        default:
            cout << "Unexpected case!" << endl;
    }

    return 0;
}
