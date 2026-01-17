#include <simplecpp>

void drawStep(double width, double height) {
    forward(width);
    left(90);
    forward(height);
    left(90);
    forward(width);
    left(90);
    forward(height);
    left(90);

    left(45);
    forward(height);
    right(45);

    forward(width);
    right(90);
    forward(height);
    right(90);
    forward(width);
    right(90);
    forward(height);
    right(90);

    // right slanted edge
    right(45);
    forward(height);
    left(45);
}

int main() {
    int n;
    cin >> n;

    turtleSim();

    double width = 300;
    double height = 30;

    for(int i = 0; i < n; i++) {
        drawStep(width, height);

        penUp();
        left(90);
        forward(height);
        right(90);
        forward(width * 0.1);
        penDown();

        width *= 0.8;
        height *= 0.8;
    }

    wait(10);
    return 0;
}
