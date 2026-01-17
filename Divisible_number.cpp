#include <simplecpp>

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool condition = false;

    if (b != 0 && c != 0 && a % b == 0 && a % c == 0)
        condition = true;
    else if (a != 0 && c != 0 && b % a == 0 && b % c == 0)
        condition = true;
    else if (a != 0 && b != 0 && c % a == 0 && c % b == 0)
        condition = true;

    if (condition)
        cout << "True";
    else
        cout << "False";

    return 0;
}
