#include "PolygonArray.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

PolygonArray::PolygonArray(){
    siz=0;
    p = new Polygon[siz];
}

PolygonArray::PolygonArray(int si){
    siz=si;
    p = new Polygon[siz];
}

PolygonArray::PolygonArray(PolygonArray &pp){
    siz=pp.siz;
    p=new Polygon[siz];
    for(int i=0;i<siz;i++){
        p[i] = pp.p[i];
    }
}

PolygonArray::~PolygonArray(){
    delete[] p;
}

void PolygonArray::resiz(int tam){
    int temp = (tam>siz) ? siz : tam;
    Polygon* t = new Polygon[tam];
    for(int i=0; i<temp; i++){
        t[i]=p[i];
    }
    delete[] p;
    p = t;
    siz = tam;
}

void PolygonArray::push_bac(Polygon po){
    resiz(siz+1);
    p[siz]=po;
}

void PolygonArray::inser(int pos,Polygon po){
    resiz(siz+1);
    for(int i=siz-1; i>pos; i--){
        p[i] = p[i-1];
    }
    p[pos] = po;
}

void PolygonArray::borrar(int pos){
    for(int i=pos;i<siz;i++){
        p[i]=p[i+1];
    }
    resiz(siz-1);
}

void PolygonArray::print(){
    for(int i=0;i<siz;i++){
        cout<<"("<<p->getw()<<","<<p->geth()<<")"<<endl;
    }

}

/*PolygonArray::~PolygonArray()
{
    //dtor
}
*/
