#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;


class Polygon{
    public:
        Polygon(){width=0; height=0;}
        Polygon(int a, int b) : width(a), height(b) {}
        virtual double area (void){return 0;}
        //virtual double area (void)=0;
        void printarea(){
            std::cout<< this->area() <<std::endl;
        }
        int getw(){return width;}
        int geth(){return height;}

    protected:
        int width, height;

};

#endif // POLYGON_H
