#pragma once
#include <iostream>
#include <graphics.h>
/* Function that returns -1,0,1 depending on whether x */
/* is <0, =0, >0 respectively */
#define sign(x) ((x>0)?1:((x<0)?-1:0))

/*
 *
 * This is the class for implementing Generalized Bresenham Algorithm
 *
 *
 */

class Generalized_Bresenham {
public:
    void bres_general(int x1, int y1, int x2, int y2)
    {
        int dx, dy, x, y, e, s1, s2, interchange=0, temp;
        x = x1;
        y = y1;

        dx = abs(x2 - x1);
        dy = abs(y2 - y1);
        s1 = sign(x2-x1);
        s2 = sign(y2-y1);

        /* Check if dx or dy has a greater range */
        /* if dy has a greater range than dx interchange dx and dy */
        if(dy > dx){
            temp = dx;
            dx = dy;
            dy = temp;
            interchange = 1;
        }

        /* Set the initial decision parameter and the initial point */
        e = 2 * dy - dx;
        for(int i = 1; i <= dx; i++)
        {
            putpixel(x,y,2);
            std::cout<<int(x)<<", "<<int(y)<<"   ";
            while(e >= 0)
            {
                if(interchange == 1)
                    x = x + s1;
                else
                    y = y + s2;
                e = e - 2* dx;
            }
            if(interchange==1)
                y = y + s2;
            else x = x + s1;
            e = e + 2 * dy;
            std::cout<<x<<", "<<y<<", "<<e<<"\n";
        }
    }
};