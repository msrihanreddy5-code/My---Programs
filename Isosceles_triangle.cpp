#include <simplecpp>

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    double d12 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    double d23 = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
    double d31 = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
    if (d12 == d23 || d23 == d31 || d12 == d31) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
