#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;              // i ek factor hai
            if (n / i != i) {   // duplicate avoid karo
                cnt++;          // n/i bhi ek factor hai
            }
        }
    }

    cout << "Total factors: " << cnt << endl;

    if (cnt == 2) cout << "Prime hai\n";
    else cout << "Prime nahi hai\n";

    return 0;
}
