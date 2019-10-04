#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>

/*
 *
 * to increase and decrease the radius of the circle by one unit
* */

class question3 {
public:
    void draw_loop_circle(int xc, int yc, int r){
        setcolor(BLUE);
        //setfillstyle(HATCH_FILL,RED);


        for (int i=150;i>=1;i--)
        {
            circle(xc,yc,i);
            delay(100);
            //clearviewport();
        }

        std::cout<<("press any key");
        getch();

        setcolor(RED);

        for (int j=0;j<=150;j++)
        {
            circle(xc,yc,j);
            delay(100);
            //clearviewport();
        }
    }
};
