#include<simplecpp>

int main(){
    double A[2][2],B[2][2],C[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> A[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> B[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j]=0;
            for(int k=0;k<2;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        cout << C[i][0] << " " << C[i][1];
        if(i==0) cout << endl;
    }
    return 0;
}
