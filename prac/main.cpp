#include <iostream>

using namespace std;

class Punto{
    public:
        int x,y;
};

class Vector{
    public:
        Punto p;

};

bool des(int x,int y){
    return y<x;
}
bool asc(int x,int y){
    return x<y;
}

void ord(Punto p[],bool asc(int,int)){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(asc(p[i].x,p[j].x)){
                Punto temp=p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main()
{
    Punto *p = new Punto[6];
    p[0].x=5;   p[0].y=2;
    p[1].x=3;   p[1].y=1;
    p[2].x=1;   p[2].y=2;
    p[3].x=2;   p[3].y=3;
    p[4].x=7;   p[4].y=5;
    p[5].x=8;   p[5].y=1;
    p[6].x=9;   p[6].y=4;
    ord(p,des);
    for(int i=0;i<6;i++){
        cout<<"("<<p[i].x<<";"<<p[i].y<<")"<<endl;
    }
    return 0;
}
