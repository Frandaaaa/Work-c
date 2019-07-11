//��α�ʾһ����

#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	~Point();

	void setXY(int x, int y);
	void setX(int x);
	void setY(int y);

	int getX();
	int getY();

	void Print();
};

Point::Point()
{
	setXY(0, 0);	
}

Point::Point(int x, int y)
{
	setXY(x, y);
}

Point::~Point()
{

}

void Point::setXY(int x, int y)
{
	setX(x);
	setY(y);
}

void Point::setX(int x)
{
	this->x=x;
}

void Point::setY(int y)
{
	this->y=y;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::Print()
{
	cout << "Point:(" << getX() << ", " << getY() << ")" << endl;
}

class Circle : public Point // �̳�
{
	double radius;
public:
	Circle()
	{
		setXY(0, 0);
		setRadius(0);
	}
	Circle(int x, int y, double r):Point(x,y)
	{
		setRadius(r);
	}
	void setInfo(int x, int y, double d)
	{
		setXY(x, y);
		setRadius(d);
	}
	void setRadius(double d)
	{
		radius=d;
	}
	double getRadius()
	{
		return radius;
	}
	void Print()
	{
		Point::Print(); // ��ʾ���ø����Print��������ɵ����Ϣ�Ĵ�ӡ
		cout << " Raius= " << getRadius() << endl;
	}

};

int main()
{
	Point p;
	p.Print();
	p.setXY(10, 10);
	p.Print();
	p.setX(100);
	p.Print();

	Circle c;
	c.Print();
	c.setX(100);
	c.setY(200);
	c.setRadius(13.14);
	c.Print();
	return 0;
}