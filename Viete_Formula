#include <simplecpp>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    cin >> n;

    double value = sqrt(2.0);
    double product = 1.0;

    for (int i = 1; i <= n; i++) {
        product = product * (value / 2.0);
        value = sqrt(2.0 + value);
    }

    cout << fixed << setprecision(6) << product;
    return 0;
}
