#ifndef CIRCLE_H
#define CIRCLE_H
#include "Polygon.h"

class Circle : public Polygon
{
    int radio;
    public:
        Circle(int a) : radio(a) {}
        double area(){
            return (3.14*radio*radio);
        }
};
#endif // CIRCLE_H
