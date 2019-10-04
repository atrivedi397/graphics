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
        setcolor(BLUE);
        //setfillstyle(HATCH_FILL,RED);
        rectangle(left, top, right, bottom);
        line(left, top, right, bottom);
        line(left, bottom, right, top);
        //floodfill(xc, yc, BLUE);

        //rectangle(219,139,419,339);

        setcolor(GREEN);
        floodfill(319,230,WHITE);

        setcolor(RED);
        floodfill(319,250,WHITE);

        setcolor(BLUE);
        floodfill(330,239,WHITE);

        setcolor(YELLOW);
        floodfill(310,239,WHITE);

    }
};

