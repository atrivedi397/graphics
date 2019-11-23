#pragma once

#include <iostream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

/*
 *
 * to draw a circle of radius 150 at the centre of the screen inscribed in a square of side 300
 * generate 500 uniform random number inside the square
 * calculate the value of pie by the defination of prob
 *
* */
class question6 {
public:

    void cir_inside_square(int xc, int yc){
        rectangle(xc-150,yc-150,xc+150,yc+150);
        circle(xc,yc,150);
        //setcolor(getmaxcolor());
        //outtextxy(260,200,"12 35 67 89 150 335");
        int sum,c,i,rand_x,rand_y,cpoints=0,spoints=0;
        for(i=0;i<500;i++)
        {
            rand_x=rand()%100;
            rand_y=rand()%100;
            sum=(rand_x*rand_x)+(rand_y*rand_y);
            c=100*100;
            if(sum<c)
            {cpoints++;
            }
            putpixel(xc+rand_x,yc-rand_y,WHITE);
            spoints++;
        }
        cout<<"points in circle "<<cpoints<<"points inside square "<<spoints<<"\n pi value=";
        double pi=(double)(4*cpoints)/(spoints);
        cout<<pi;


    }

};

