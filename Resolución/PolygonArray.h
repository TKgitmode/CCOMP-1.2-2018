#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"


class PolygonArray{
    private:
        int siz;
        Polygon *p;
    public:
        PolygonArray();
        PolygonArray(int);
        PolygonArray(PolygonArray &o);
        ~PolygonArray();

        void resiz(int );
        void push_bac(Polygon);
        void inser(int ,Polygon);
        void borrar(int);
        void print();
};

#endif // POLYGONARRAY_H
