#include <stdlib.h>
#include <graphics.h>
#include <iostream>
#include "differential_digital_analyzer.h"
#include "Bresenham_line_drawing.h"
#include "Generalized_bresenham_line.h"
#include "Bresenham_circle.h"

DDA object;
Bresenham line_obj;
Generalized_Bresenham line_object;
Bresenham_circle circle_obj;

int main() {
    int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);
    //circle_obj.Circle(0, 0, 8);
    //line_object.bres_general(0,0,8, 6);
    //line_obj.drawline(0,0,90,80);
    //object.dda(1,1,8,2);
    delay(50000);
    return 0;
}