#include <iostream>

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



