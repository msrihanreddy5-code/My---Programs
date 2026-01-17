#include <simplecpp>

main_program {
    int X;
    cin >> X;

    int steps = 0;

    while (X != 1) {
        if (X % 2 == 0) {
            X = X / 2;
        } else {
            X = 3 * X + 1;
        }
        steps++;
    }

    cout << steps;
}
