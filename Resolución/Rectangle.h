#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle : public Polygon
{
    int width, height;
    public:
        Rectangle(int a,int b) : width(a), height(b) {}
        double area(){
            return (width*height);
        }
};
#endif // RECTANGLE_H
