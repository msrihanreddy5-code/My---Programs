#include <simplecpp>

int main() {
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '.') {
            cout << count << s[i - 1];
            break;
        }

        if (s[i] == s[i - 1]) {
            count++;
        } else {
            cout << count << s[i - 1];
            count = 1;
        }
    }

    return 0;
}
