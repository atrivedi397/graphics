#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>
/*
 *
 * to draw a square and its diagonal and fill the primary colors in it
* */

class question4 {
public:
    void draw_rectangle(int xc, int yc, int left, int top, int right, int bottom) {

        //setfillstyle(HATCH_FILL,RED);
        setcolor(4);
        rectangle(left, top, right, bottom);
        line(left, top, right, bottom);
        line(left, bottom, right, top);
        floodfill(xc+10,yc-6,BLUE);
        setcolor(BLUE);
        floodfill(xc,yc-6,4);
        setcolor(YELLOW);
        floodfill(xc-10,yc,4);
        setcolor(GREEN);
        floodfill(xc,yc+6,4);

        //rectangle(219,139,419,339);


    }
};

