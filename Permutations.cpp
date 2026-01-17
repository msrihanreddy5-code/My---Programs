#include<simplecpp>

long long factorial(int x){
    long long f=1;
    for(int i=1;i <=x;i++){
        f *=i;
    }
    return f;
}

int main(){
    int n,r; 
    cin >> n >>r;

    long long p = factorial(n) / factorial(n-r);
    long long c = factorial(n) / (factorial(r) * factorial(n-r));

    cout << p << " " << c;
    return 0;
}
