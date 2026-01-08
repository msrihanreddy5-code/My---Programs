#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddSum = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Even Sum: " << evenSum << endl;
    cout << "Odd Sum: " << oddSum;

    return 0;
}
