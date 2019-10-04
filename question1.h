#pragma once

#include <iostream>
#include <graphics.h>
/*
 *
 * This is the class for implementing a line a(0, 0) and b(150, 150)
* */

class question1 {
public:
    void draw_line(int x1, int y1, int x2, int y2){
       line(x1, y1, x2, y2);
    }
};
