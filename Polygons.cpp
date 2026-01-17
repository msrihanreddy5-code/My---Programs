#include <simplecpp>

void drawPolygon(int n, double side) {
    for (int i = 0; i < n; i++) {
        forward(side);
        left(360.0 / n);
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 3) return 0;

    turtleSim();

    double side = 150;

    Turtle t1, t2, t3;
    t1.penUp(); t2.penUp(); t3.penUp();
    t1.moveTo(0, 0);
    t2.moveTo(0, 0);
    t3.moveTo(0, 0);
    t1.penDown(); t2.penDown(); 
    t3.penDown();

    t1.left(0);
    t2.left(120);
    t3.left(240);
    t1.forward(0);
    drawPolygon(n, side);

    t2.forward(0);
    drawPolygon(n, side);

    t3.forward(0);
    drawPolygon(n, side);

    wait(5);
    return 0;
}
