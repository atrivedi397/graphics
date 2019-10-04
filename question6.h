#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>

/*
 *
 * to draw a circle of radius 150 at the centre of the screen inscribed in a square of side 300
 * generate 500 uniform random number inside the square
 * calculate the value of pie by the defination of prob
 *
* */
class question6 {
public:

    void cir_inside_square(int xc, int yc){
        rectangle(xc-150,yc-150,xc+150,yc+150);
        circle(xc,yc,150);

        //outtextxy(260,200,"12 35 67 89 150 335");


    }

};

