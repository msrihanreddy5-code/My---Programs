#include <simplecpp>

main_program {
    int n;
    cin >> n;

    double product = 1.0;

    for (int i = 1; i <= n; ++i) {
        double numerator = 2.0 * ((i + 1) / 2);
        double denominator = 2.0 * (i / 2) + 1.0;
        product *= (numerator / denominator);
    }

    double pi = product * 2.0;
    cout << pi << endl;
}
