#include <simplecpp>

main_program {

    cout << "Please enter your number: ";
    int n;
    cin >> n;              

    turtleSim();           

    double angle = 360.0 / n;

    repeat(n) {
        repeat(4) {
            forward(100);
            right(90);
        }
        right(angle);
    }

    wait(10);
}
