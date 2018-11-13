#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"

template <typename T>
class PolygonArray{
    private:
        int siz;
        T *data;
    public:
        PolygonArray();
        PolygonArray(int );
        PolygonArray(PolygonArray <T>&o);
        ~PolygonArray();

        void resiz(int );
        void push_bac(T);
        void inser(T,int);
        void borrar(int);
        //void print()
};

#endif // POLYGONARRAY_H
