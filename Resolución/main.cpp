#include <iostream>
#include "PolygonArray.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main(){
    Circle c(5);
    Rectangle r(3,5);

    Polygon *rec = &r;
    Polygon *cir = &c;

    cout<<rec->area()<<endl;
    cout<<cir->area()<<endl;

    /*Polygon po1;
    Polygon po2(2,3);
    Polygon po3(5,3);
    Polygon po4(1,6);*/

    //Polygon po[4]={po1,po2,po3,po4}
    PolygonArray poarra(4);

    poarra.print();

}
