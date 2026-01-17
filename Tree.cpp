#include <simplecpp>
using namespace std;

int main() {
    int n;
    cin >> n;

    int trunkHeight = n / 2;
    int maxWidth = 2 * n - 1;
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        int spaces = (maxWidth - stars) / 2;

        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }

    for (int i = 0; i < trunkHeight; i++) {
        int spaces = (maxWidth - 3) / 2;

        for (int j = 0; j < spaces; j++)
            cout << " ";

        cout << "***" << endl;
    }

    return 0;
}
