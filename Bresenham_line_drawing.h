#pragma once

#include <iostream>
#include <graphics.h>

/*
 *
 * This is the class for implementing Bresenham Algorithm
 * */

class Bresenham {
public:
    void drawline(int x0, int y0, int x1, int y1) {
        int dx, dy, e, x, y;

        dx = x1 - x0;
        dy = y1 - y0;

        x = x0;
        y = y0;

        e = 2 * dy - dx;


        for(int i=1;i<=dx;i++){
            putpixel(x, y, 7);
            while(e >= 0){
                y = y + 1;
                e = e - 2 * dx;

            }
            x = x + 1;
            e = e + 2 * dy;

            std::cout<<e<<"  "<<x<<" "<<y<<"  \n";
        }
        }
};
