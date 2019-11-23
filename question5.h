#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>

/*
 *
 * to draw a graph of |y| = 50sin(x/50) in blue color
 * color red in the portion of graph above x axis
 * fill green in the portion of the graph below x axis
 *
 * again draw a graph of |y| = 50cos(x/50) in blue color
 * and repeat the above steps
* */
class question5 {
public:
    int angle = 0;
    void plot_cos_graph(int xc, int yc){


        for(int x = getmaxx()/2; x < getmaxx(); x+=3) {

            /* calculate y value given x */
            int y = 50 * cos(angle * 3.141 / 180);
            y = getmaxy() / 2 - y;

            /* color a pixel at the given position */
            putpixel(x, y, BLUE);
            delay(70);

            /* increment angle */
            angle += 5;
        }
    }

};
