#include <simplecpp>

int main() {
    double salary;
    cin >> salary;

    if (salary < 250000) {
        cout << "A";
    }
    else if (salary < 500000) {
        cout << "B";
    }
    else if (salary < 1000000) {
        cout << "C";
    }
    else {
        cout << "D";
    }

    return 0;
}
