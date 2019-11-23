#pragma once

#include <graphics.h>
#include <iostream>
/*
 *
 * a circle of radius 150 of blue color with the use of floodfill function
* */

class BezierCurve {
public:

    void write_name(){
        int xmax, ymax;

        setcolor(getmaxcolor());
        xmax = getmaxx();
        ymax = getmaxy();
        setcolor(1);
        int x=xmax/2,y=ymax/2;
        line(0, y,x+xmax,y);
        line(x, ymax,x,y-ymax);
        int r[][2]={{10,80},{40,80},{40,60},{10,60}
                ,{10,60},{20,50},{30,40},{40,30},
                    {60,80},{60,60},{60,50},{60,30},
                    {90,70},{80,70},{80,80},{90,80},
                    {90,80},{120,80},{120,60},{90,60},
                    {90,60},{100,50},{110,40},{120,30}
                ,{60,80},{60,120},{160,120},{160,80},
                    {160,80},{160,70},{160,60},{160,50}
                ,{160,50},{130,50},{130,70},{160,70},
                    {160,70},{170,70},{180,70},{190,70},
                    {190,80},{190,60},{190,40},{190,30},
                    {0,80},{80,80},{160,80},{200,80}};
        int a[4],b[4],i,k=1,m;
        for(k=0;k<48;k=k+4)
        {
            for(m=0;m<4;m++)
            {a[m]=r[k+m][0];
                b[m]=r[k+m][1];
            }
            for(i=0;i<4;i++)
            {
                a[i]=x+a[i];
                b[i]=y-b[i];
            }
            draw(a,b);
        }
    }



    void beziercurve(int x[],int y[])
    {
        double xu=0.0,yu=0.0,u=0.0;
        for(u=0.0;u<=1.0;u+=0.0001)
        {xu=pow(1-u,3)*x[0]+3*u*pow(1-u,2)*x[1]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3];
            yu=pow(1-u,3)*y[0]+3*u*pow(1-u,2)*y[1]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3];
            putpixel(xu,yu,RED);
        }}
    void draw(int a[],int b[])
    { int i;
        for(i=0;i<3;i++)
        { line(a[i],b[i],a[i+1],b[i+1]);
        }
        beziercurve(a,b);
    }
};


