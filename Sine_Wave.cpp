#include <simplecpp>
#include <cmath>
#include <iomanip>

int main() {
    double x0, x1, scale, stepsize;
    cin >> x0 >> x1 >> scale >> stepsize;

    double length = 0.0;
    double x = x0;

    while (x + stepsize <= x1) {
        double y1 = sin(x);
        double y2 = sin(x + stepsize);

        double dx = stepsize;
        double dy = y2 - y1;

        length += sqrt(dx*dx + dy*dy);
        x += stepsize;
    }

    cout << fixed << setprecision(5) << length;
    return 0;
}
