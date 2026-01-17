#include <simplecpp>

main_program{
    int rows, cols;
    cin >> rows >> cols;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}
