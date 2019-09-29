#pragma once

#include <iostream>
#include <graphics.h>

/*
 *
 * This is the class for implementing DDA Algorithm
 * */

class DDA{
    int length = 0;

public:
    void dda(int x1, int y1, int x2, int y2){
        float x,y,dx,dy;
        int i,length;
        dx = abs(x2-x1);
        //std::cout<<x2<<"  "<<x1<< " "<<dx<<"\n";
        dy = abs(y2-y1);
        if(dx>=dy) length = dx;
        else length = dy;
        float x_inc = dx/(x2-x1);
        std::cout<<"\n"<<x_inc<<"\n";
        float y_inc = dy/(x2-x1);
        x=x1;
        y=y1;
        i=1;
        while(i<=length){
            putpixel(int(x),int(y),WHITE);
            std::cout<<int(x)<<", "<<int(y)<<"   ";
            x = x + x_inc;
            y = y + y_inc;
            std::cout<<x<<", "<<y<<"\n";
            i++;
        }
    }
};