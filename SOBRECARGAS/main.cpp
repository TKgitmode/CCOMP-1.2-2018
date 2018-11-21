#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

template<class T>
class Point{
private:
	T x, y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(T a, T b)
	{
		x = a;
		y = b;
	}
	Point(Point &o)
	{
		x = o.x;
		y = o.y;
	}
	void print()
	{
		std::cout << "(" << x << "," << y << ")";
	}
	void offset(T a, T b)
	{
		x += a;
		y += b;
	}
	T getx() { return x; }
	T gety() { return y; }


};


template<class T>
class PointArr{
private:
	T size;
	Point<T> *data;
	void resize(T newsize)
	{
		T sizetemp = (size < newsize) ? newsize : size;
		Point<T> *temp = new Point<T>[newsize];
		for (int i = 0; i < sizetemp; i++) {
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
		size = newsize;
	}
public:
    PointArr()
    {
        this->size = 0;
        this->data = new Point<T>[size];
    }

	PointArr(T size)
	{
		this->size = size;
		data = new Point<T>[size];
	}

	PointArr(T size, Point<T> p1)
	{
		this->size = size;
		data = new Point<T>[size];
		for (int i = 0; i < size; i++)
			data[i] = p1;
	}

	~PointArr()
	{
		delete[] data;
	}

	PointArr(PointArr &o)
	{
		size = o.size;
		data = new Point<T>[size];
		for (int i = 0; i < size; i++)
			data[i] = o.data[i];
	}

	void print()
	{
		cout << "";
		for (int i = 0; i < size; i++)
			data[i].print();
		cout << "" << endl;
	}

	Point<T> getPoint(int pos)
	{
		return data[pos];
	}

	T getsize()
	{
		return size;
	}

	void clear()
	{
		resize(0);
	}

	void push_back(Point<T> p)
	{
		resize(size + 1);
		data[size - 1] = p;
	}

	void insert(T pos, Point<T> p)
	{
		resize(size + 1);
		for (int i = size - 1; i > pos; i--)
			data[i] = data[i - 1];
		data[pos] = p;
	}

	void erase(T pos)
	{
		for (int i = pos; i < (size - 1); i++)
			data[i] = data[i + 1];
		resize(size - 1);
	}
};

PointArr<int> &operator+(PointArr<int> &p1, PointArr<int> &p2)
{
	PointArr<int> *res = new PointArr<int>;

	for (int i = 0; i < p1.getsize(); i++)
	{
		Point<int> p(0, 0);
		p = p1.getPoint(i);
		res->push_back(p);
	}
	for (int i = 0; i < p2.getsize(); i++)
	{
		Point<int> p(0, 0);
		p = p2.getPoint(i);
		res->push_back(p);
	}
	return *res;
}

ostream& operator<<(ostream& o, PointArr<int> p)
{
	for (int i = 0; i < p.getsize(); i++)
	{
		o << "(" << p.getPoint(i).getx() << ", " << p.getPoint(i).gety() << ")";
	}
	return o;
}

void crear_archivo(PointArr<int> p)
{
	ofstream archivo;
	archivo.open("sobrecarga.txt", ios::out);
	if (archivo.fail())
	{
		cout << "Error al Imprimir";
		exit(1);
	}

	archivo << p;
	archivo.close();
}

int main() {

	Point<int> p1(1, 2),    p2(3,4),    p3(5,6),    p4(7, 8);

	Point<int> p5(9, 10),   p6(10, 12), p7(13, 14), p8(15, 16);

	PointArr<int> pA1(1, p1);
	pA1.push_back(p2);
	pA1.push_back(p3);
	pA1.push_back(p4);
	pA1.print();
	PointArr<int> pA2(1, p5);
	pA2.push_back(p6);
	pA2.push_back(p7);
	pA2.push_back(p8);
	pA2.print();

	PointArr<int> pA3(0);

	pA3 = pA1 + pA2;
	cout << pA3 << endl;
	crear_archivo(pA3);

	system("pause");
	return 0;
}

