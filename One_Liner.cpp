#include <simplecpp>

int main() {
    double x1, y1, x2, y2, a, b;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> a >> b;

    double cross = (a - x1) * (y2 - y1) - (b - y1) * (x2 - x1);

    if (abs(cross) > 1e-9) {
        cout << "False";
        return 0;
    }

    if (a >= min(x1, x2) && a <= max(x1, x2) &&
        b >= min(y1, y2) && b <= max(y1, y2)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
