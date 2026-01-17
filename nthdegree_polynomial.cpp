#include <simplecpp>
#include <iomanip>

int main() {
    int n;
    cin >> n;

    double x;
    cin >> x;

    double a[n + 1];
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    double result = a[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }

    cout << fixed << setprecision(6) << result;

    return 0;
}
