#include <simplecpp>
using namespace std;

int main() {
    long long result, num;
    char op;

    cin >> result;   // first number

    while (true) {
        cin >> op;

        if (op == '?')
            break;

        cin >> num;

        if (op == '+')
            result = result + num;
        else if (op == '-')
            result = result - num;
    }

    cout << result;

    return 0;
}
