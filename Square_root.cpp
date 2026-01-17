#include<simplecpp>
using namespace std;

int main(){
    int n;
    double m;
    cin >> n >>m;

    double x = (n+1.0)/2.0;

    while (abs(x*x -n)>=m){
        x=0.5 * (x+ n / x);
    }

    cout<<x;

    return 0;
}
