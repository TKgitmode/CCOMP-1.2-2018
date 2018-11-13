#include "PolygonArray.h"

/*template <typename T>
PolygonArray<T>::PolygonArray(){
    this->data  =  new Polygon<T>[0];
    thinew Polygon<T>s->siz = 0;
}

template <typename T>
PolygonArray<T>::PolygonArray(int s){
    this->siz = s;
    new Polygon<T>* data = ne new Polygon<T>[siz];
}

template <typename T>
PolygonArray<T>::PolygonArray(PolygonArray <T>&o){
    this->siz = o.siz;
    T* data = new T[siz];
    for (int i=0;i<siz;i++){
        data[i] = o[i];
    }

}

template <typename T>
PolygonArray<T>::~PolygonArray(){
    delete[] this->data;
}

template <class T>
void PolygonArray<T>::resiz(int tam){
    if (tam < siz) siz = tam;
    T* p = new T[tam];
    for(int i=0; i<tam; i++){
        p[i]=data[i];
    }
    delete[] data;
    data = p;
    siz = tam;
}

template <typename T>
void PolygonArray<T>::push_bac(T e){
    resiz(siz+1);
    data[siz-1]=e;
}

template <typename T>
void PolygonArray<T>::inser(T e, int pos){
    resiz(siz+1);
    for(int i=siz-1; i>pos; i--){
        data[i]=data[i-1];
    }
    data[pos]=e;
}

template <typename T>
void PolygonArray<T>::borrar(int pos){
    for(int i=pos; i<siz-1; i++){
        data[i]=data[i+1];
    }
    resiz(siz-1);
}*/
