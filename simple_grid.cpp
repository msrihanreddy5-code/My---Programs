#include<simplecpp>
main_program {
    initCanvas("Grid",400,400);

    int startX = 100;
    int startY = 100;

    for(int i=0;i<=3;i++){
        line(startX +i*50,startY,startX+i*50,startY+150);

        line(startX,startY+i*50,startX+150,startY+i*50);
    }
}
