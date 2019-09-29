#include <stdlib.h>
#include <graphics.h>
#include "differential_digital_analyzer.h"
#include "Bresenham_line_drawing.h"
#include "Generalized_bresenham_line.h"
#include "Bresenham_circle.h"
#include<iostream>

DDA object;
Bresenham line_obj;
Generalized_Bresenham line_object;
Bresenham_circle circle_obj;

int main() {
    int x1, y1,x2,y2;
    std::cout<<"ENTER A(X1, X2) , B(X2, Y2)";
    std::cin>>x1>>y1>>x2>>y2;
    int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);

    int xc = getmaxx()/2;
    int yc = getmaxy()/2;
    //line(0, yc, 2*xc, yc);
    //line(xc, 0, xc, 2*yc);
    //circle_obj.Circle(xc, yc, 8);
    //line_object.bres_general(xc+0, yc-0, xc-8, yc-6);
    //line_obj.drawline(10,50,90,80);
    object.dda(xc+x1,yc-y1,xc+x2,yc-y2);
    delay(50000);
    return 0;
}