#include <iostream>
using namespace std;

int main() {
    string s =
"#include <iostream>\nusing namespace std;\n\nint main() {\n    string s =\n\"%s\";\n    printf(s.c_str(), s.c_str());\n    return 0;\n}\n";
    printf(s.c_str(), s.c_str());
    return 0;
}
