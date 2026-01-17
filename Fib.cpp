#include <simplecpp>

int main() {
    int N;
    cin >> N;

    int a = 1, b = 1;
    int fib = 1;

    while (fib < N) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << a;

    return 0;
}
