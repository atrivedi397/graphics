
#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>

/*
 *
 * draw a graph of |y| = |x|-50 and fill blue color if it is an enclosed figure
 *
* */
class question7 {
public:

    void plot_graph(int xc, int yc){
        int x =0;
        int n=0;

        x = xc/2;
        while(x < xc) {
            int y = x - 50;
            y = getmaxy() / 2 - y;
            putpixel(x, y, 5);

            y = -x - 50;
            y = getmaxy() / 2 - y;
            putpixel(x, y, 13);
            delay(50);


            x = x + 1;

        }
    }

};

