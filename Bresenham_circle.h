#pragma once

#include <iostream>
#include <graphics.h>

/*
 *
 * This is the class for implementing Bresenham circle Algorithm
 * */

class Bresenham_circle {
public:
    int xi,yi,di, d, d1;
    void mh() /*To Move in Horizontal direction */ {
        xi=xi+1;
        di=di+(2*xi)+1;
    }

    void md() /*To Move in Diagonal direction */ {
        xi=xi+1;
        yi=yi-1;
        di=di+(2*xi)-(2*yi)+2;
    }

    void mv() /*To Move in Vertical direction */ {
        yi=yi-1;
        di=di-(2*yi)+1; }

    void Circle(int centre_x, int centre_y, int r){
        xi=0;


        yi=r;
        di=2*(1-r);
        while(yi>=0){

            putpixel(centre_x+xi,centre_y+yi,RED);
            putpixel(centre_x+xi,centre_y-yi,GREEN);
            //putpixel(centre_x-xi,centre_y+yi,YELLOW);
            //putpixel(centre_x-xi,centre_y-yi,BLUE);
            if(di<0)
            {
                d=(2*di)+(2*yi)-1;
                if(d<0)
                    mh();
                else
                    md();
            }
            else if(di>0)
            {
                d1=(2*di)-(2*xi)-1;
                if(d1<=0)
                    md();
                else
                    mv();
            }
            else if(di==0)
                md();

         std::cout<<xi<<"  "<<yi<<"  "<<di<<"  "<<d<<"  "<<d1<<"\n";
        }

    }


};
