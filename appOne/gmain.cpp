#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt(a * a + b * b);

        clear(140);
        mathAxis(4.1);

        stroke(60, 120, 240);
        strokeWeight(4);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);


        textSize(50);
        text("íÍï” =" + a, 0, 60);
        text("çÇÇ≥ =" + b, 0, 120);
        text("éŒï” =" + c, 0, 180);


    }
}