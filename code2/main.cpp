#include <iostream>

using namespace std;

int main(){
  /*  int a;
    int b;
    int c;
    int p;
    cin >> a;
    cin >> b;
    cin >> c;
    p = a+b+c;
    cout << "La suma es: "<< p << endl;
    cout << "El promedio es: "<< p/3.0<< endl;

    if (a%2==0){
        cout << "A es par"<< endl;
    }
    else {
        cout << "A es impar"<< endl;
    }

    if (a>b && a>c){
            if(b<c){
                cout << "El mayor es: "<< a << endl;
                cout << "El menor es: "<< c<< endl;
            }
            else{
                cout << "El mayor es: "<< a<< endl;
                cout << "El menor es: "<< b<< endl;
            }
    }
   if (b>a && b>c){
            if(a<c){
                cout << "El mayor es: "<< b<< endl;
                cout << "El menor es: "<< a<< endl;
            }
            else{
                cout << "El mayor es: "<< b<< endl;
                cout << "El menor es: "<< c<< endl;
            }
    }
    if (c>b && c>a){
            if(b<a){
                cout << "El mayor es: "<< c<< endl;
                cout << "El menor es: "<< b<< endl;
            }
            else{
                cout << "El mayor es: "<< c<< endl;
                cout << "El menor es: "<< a<< endl;
            }
    }
    return 0;
    solicite 2 numeros si el primero es multiplo del segundo*/

/*    int a;
    int b;

    cin >> a;
    cin >> b;

    if (a%b == 0){
        cout << a << "Es mulitplo de  "<<b<<endl;
    }
    else{
        cout << "NO Son multiplos"<< endl;
    }*/

    //programa de entero de 5 digitos y separe estos digitos y los imprima por una tabulacion

    int a;

    int mm;
    int m;
    int c;
    int d;
    int u;

    cin >> a;
    /*
    mm = a / 10000;
    m = (a / 1000)-(mm*10);
    c = (a/100)-(mm*10+m)*10;
    d = (a/10)-(mm*1000+m*100+c*10);
    u = a-(mm*10000+m*1000+c*100+d*10);*/

    /*mm = a%10000;
    m = mm%1000;
    c = m%100;
    d = c%10;
    u = d%1;*/

    cout << mm << "\t"<<  m<< "\t"<<c<<"\t"<<d<<"\t"<<u;



}
