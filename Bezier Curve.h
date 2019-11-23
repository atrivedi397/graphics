#pragma once

#include <graphics.h>
#include <iostream>
/*
 *
 * a circle of radius 150 of blue color with the use of floodfill function
* */

class bezierc {
public:
    void draw_circle(int xc, int yc, int r){
        setcolor(BLUE);
        // setfillstyle(HATCH_FILL,RED);
        circle(xc, yc, r);
        floodfill(xc, yc, WHITE);
    }
};


