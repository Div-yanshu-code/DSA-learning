#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{

    int start = 0;

    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {1, 8, 9, 0, -3, 2};

    int burray[5] = {0, 5, 3, 6, 8};

    reverse(arr, 6);
    reverse(burray, 5);

    printArray(arr, 6);
    printArray(burray, 5);

    return 0;
}
