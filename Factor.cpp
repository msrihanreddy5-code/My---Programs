#include<simplecpp>

int main(){
    int n;
    cin >> n;

    if(n%2==0 && n%3==0&&n%4!=0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
