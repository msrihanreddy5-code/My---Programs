#include<simplecpp>
int main(){
    int n;
    cout << "Please enter your number: ";
    cin >> n;

    if(n<3 || n>30){
        cout<< "n should be between 3 and 30"<< endl;
        return 0;
    }
    initCanvas("Dashed Polygon",600,600);

    Turtle t;
    t.penUp();
    t.moveTo(300,300);
    t.penDown();

    double angle = 360.0/n;
    double gap = 6.25;
    int dashes =5;

    repeat(n){

        repeat(dashes){
            t.forward(5);
            t.penUp();
            t.forward(gap);
            t.penDown;
        }
        
        t.right(angle);
        t.penUp();
        t.forward(-gap);
        t.penDown();
    }
    wait(5);
    return 0;
}
