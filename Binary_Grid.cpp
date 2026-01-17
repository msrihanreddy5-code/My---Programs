#include <simplecpp>

main_program {
    int n;
    cin >> n;

    int i = 0;
    repeat(n) {
        int j = 0;
        repeat(n) {
            if ((i + j) % 2 == 0)
                cout << 0 << " ";
            else
                cout << 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
