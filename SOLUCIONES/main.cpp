#include <iostream>
//#include "PolygonArray.h"

using namespace std;

template <class T>
class Polygon{
    protected:
        T width,height;
    public:
        Polygon (T a,T b) : width(a), height(b){}
        Polygon () {width = 0;  height = 0;}
        //virtual T area (void) = 0;
        virtual T area (void) {return 0;}
        void printarea(){
            cout<<this->area()<<endl;
        }

        T getx(){
            return width;}
        T gety(){
            return height;}

};

template <class T>
class Rectangle : public Polygon<T>{
    public:
        Rectangle(T w,T h) : Polygon<T>(w,h){}
        T area(){
            return (this->width*this->height);
            }
};

template <class T>
class Triangle : public Polygon<T>{
    public:
        Triangle (T w,T h) :  Polygon<T>(w,h){}
        T area (){
            return (this->width*this->height)/2;
        }
};


template <class T>
class Circle : public Polygon<T>{
    private:
        T radio;
    public:
        Circle (T r) : radio(r){}
        T area(){
            return radio*radio*3.14;
        }

};

template <typename T>
class PolygonArray{
    private:
        int siz;
        Polygon<T> *data;
    public:
        PolygonArray();
        PolygonArray(int );
        PolygonArray(PolygonArray <T>&o);
        ~PolygonArray();

        void resiz(int );
        void push_bac(Polygon<T>);
        void inser(Polygon<T>,int);
        void borrar(int);
        void print();
};


template <typename T>
PolygonArray<T>::PolygonArray(){
    data  =  new Polygon<T>[0];
    siz = 0;
}

template <typename T>
PolygonArray<T>::PolygonArray(int s){
    siz = s;
    data = new Polygon<T>[siz];
}

template <typename T>
PolygonArray<T>::PolygonArray(PolygonArray <T>& o){
    this->siz = o.siz;
    data = new Polygon<T>[siz];
    for (int i=0;i<siz;i++){
        data[i] = o.data[i];
    }

}

template <typename T>
PolygonArray<T>::~PolygonArray(){
    delete[] this->data;
}

template <class T>
void PolygonArray<T>::resiz(int tam){
    if (tam < siz) siz = tam;
    Polygon<T>* p = new Polygon<T>[tam];
    for(int i=0; i<tam; i++){
        p[i]=data[i];
    }
    delete[] data;
    data = p;
    siz = tam;
}

template <typename T>
void PolygonArray<T>::push_bac(Polygon<T> e){
    resiz(siz+1);
    data[siz-1]=e;
}

template <typename T>
void PolygonArray<T>::inser(Polygon<T> e, int pos){
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
}

template <typename T>
void PolygonArray<T>::print(){
    for(int i =0;i<siz;i++){
        cout<<data[i].getx() <<","<<data[i].gety()<<endl;
    }
}

int main(){
    Polygon <int>*rec;
    Polygon <int>*tri;
    Polygon <int>*cir;

    Rectangle <int>r(3,5);
    Triangle <int>t(3,6);
    Circle <int>c(3);

    rec = &r;
    tri = &t;
    cir = &c;

    rec->printarea();
    tri->printarea();
    cir->printarea();

    PolygonArray <int> noparametros;
    PolygonArray <int> parametros(4);
    PolygonArray <int> copia(parametros);

    Polygon <int>a(3,5);
}
