#include<simplecpp>

int main(){
    float x;
    cin >> x;

    float term =1.0;
    float sum = 1.0;

    for(int i=1;i<16;i++){
        term = term*x / i;
        sum = sum + term;
    }

    cout << sum;
    return 0;
}
