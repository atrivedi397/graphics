#include <stdlib.h>
#include <graphics.h>
#include "differential_digital_analyzer.h"
#include "Bresenham_line_drawing.h"
#include "Generalized_bresenham_line.h"
#include "Bresenham_circle.h"
#include "question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"
#include<iostream>

DDA object;
Bresenham line_obj;
Generalized_Bresenham line_object;
Bresenham_circle circle_obj;

question1 obj1;
question2 obj2;
question3 obj3;
question4 obj4;

int main() {
    int x1, y1,x2,y2;
    //std::cout<<"ENTER A(X1, X2) , B(X2, Y2)";
    //std::cin>>x1>>y1>>x2>>y2;
    int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);

    int xc = getmaxx()/2;
    int yc = getmaxy()/2;
    //line(0, yc, 2*xc, yc);
    //line(xc, 0, xc, 2*yc);

    //circle_obj.Circle(xc, yc, 4);
    //line_object.bres_general(xc+x1, yc-y1, xc+x2, yc-y2);
    //line_obj.drawline(10,50,90,80);
    //object.dda(xc+x1,yc-y1,xc+x2,yc-y2);

    //obj1.draw_line(xc+0, yc-0, xc+150, yc-150);
    //obj2.draw_circle(xc, yc, 150);
    //obj3.draw_loop_circle(xc, yc, 150);
    obj4.draw_rectangle(xc, yc, xc-200, yc-200, xc+200, yc+200);
    delay(50000);
    return 0;
}