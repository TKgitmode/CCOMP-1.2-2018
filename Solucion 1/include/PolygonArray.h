#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"

template <class T>
class PolygonArray{
    private:
        T siz;
        Polygon<T>*data;
    public:
        PolygonArray();
        PolygonArray(T );
        PolygonArray(PolygonArray <T>&o);
        ~PolygonArray();

        void resiz(T );
        void push_bac(Polygon<T>);
        void inser(Polygon<T>,T);
        void borrar(T);
        void print();


};

#endif // POLYGONARRAY_H
