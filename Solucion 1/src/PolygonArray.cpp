#include "PolygonArray.h"

template <class T>
PolygonArray<T>::PolygonArray(){
    this->data  =  new Polygon<T>[0];
    this->siz = 0;
}

template <class T>
PolygonArray<T>::PolygonArray(T s){
    this->siz = s;
    Polygon<T>* data = new Polygon<T>[siz];
}

template <class T>
PolygonArray<T>::PolygonArray(PolygonArray <T>&o){
    this->siz = o.siz;
    Polygon<T>*data = new Polygon<T>[siz];
    for (int i=0;i<siz;i++){
        data[i] = o[i];
    }

}

template <class T>
PolygonArray<T>::~PolygonArray()
{
    delete[] data;
}

template <class T>
void PolygonArray<T>::resiz(T tam){
    if (tam < siz) siz = tam;
    Polygon<T>* p = new Polygon<T>[tam];
    for(int i=0; i<tam; i++){
        p[i]=data[i];
    }
    delete[] data;
    data = p;
    siz = tam;
}

template <class T>
void PolygonArray<T>::push_bac(Polygon <T>e){
    resiz(siz+1);
    data[siz-1]=e;
}

template <class T>
void PolygonArray<T>::inser(Polygon<T> e, T pos){
    resiz(siz+1);
    for(int i=siz-1; i>pos; i--){
        data[i]=data[i-1];
    }
    data[pos]=e;
}

template <class T>
void PolygonArray<T>::borrar(T pos){
    for(int i=pos; i<siz-1; i++){
        data[i]=data[i+1];
    }
    resiz(siz-1);
}
