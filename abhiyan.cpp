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
        setcolor(BLACK);
        int x=xmax/2,y=ymax/2;
        line(0, y,x+xmax,y);
        line(x, ymax,x,y-ymax);
        int r[][2]={{0, 100}, {50, 100}, {50, 50}, {0, 50},
                    {0, 50}, {50, 50}, {50, 0}, {0, 0},
                    {0, 50}, {60,50}, {0, 50}, {60,50},
                    {60, 0}, {60, 100}, {60, 0}, {60, 100},
                    {80, 0}, {80, 100}, {80, 0}, {80, 100},                 //ABHI
                    {120, 0}, {120, 100}, {120, 0}, {120, 100},
                    {120, 100}, {80, 100}, {90, 80}, {120, 80},
                    {120, 80}, {160, 80}, {120, 80}, {160, 80},
                    {120, 15}, {90, 15}, {90, 0}, {120, 0},
                    {160, 0}, {160,100}, {160, 0}, {160,100},
                    {120, 15}, {160, 15}, {120, 15}, {160, 15},
                    {80, 100}, {80, 130}, {160, 130}, {160, 100},


                    {170, 100}, {200, 100}, {200, 60}, {170, 60},
                    {170, 60}, {210, 60}, {170, 60}, {210, 60},
                    {210, 100}, {210, 0}, {210, 100}, {210, 0},
                    {220, 100}, {220, 0}, {220, 100}, {220, 0},
                    {230, 70}, {230, 30}, {245, 30}, {245, 70},               //YAAN
                    {230, 70}, {270, 70}, {230, 70}, {270, 70},
                    {270, 100}, {270, 0}, {270, 100}, {270, 0},
                    {0, 100}, {272, 100}, {0, 100}, {272, 100}

                    ///UN-comment this one below to write Abhishek
                    /*{170, 100}, {170, 50}, {200, 50}, {200, 100},
                    {170, 100}, {200, 80}, {170, 100}, {200, 80},
                    {200, 100}, {200, 0}, {200, 100}, {200, 0},
                    {165, 140}, {200, 100}, {165, 140}, {200, 100},
                    {250, 70}, {200, 70}, {200, 30}, {250, 30},          //SHEK
                    {250, 100}, {250, 0}, {250, 100}, {250, 0},
                    {250, 30}, {250, 60}, {290, 60}, {290, 30},
                    {0, 100}, {293, 100}, {0, 100}, {293, 100}*/

        };
        int a[4],b[4],i,k=1,m;
        for(k=0;k<80;k=k+4)
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


int main()
{
    BezierCurve abhiyan;
    int x1, y1, x2, y2;

    int gd, gm = VGAMAX;
    gd = DETECT;
    initgraph(&gd, &gm, NULL);

    int xc = getmaxx() / 2;
    int yc = getmaxy() / 2;
    line(0, yc, 2 * xc, yc);
    line(xc, 0, xc, 2 * yc);

    abhiyan.write_name();

    delay(500000);
    return 0;
}
//
// Created by atrivedi on 11/24/19.
//

