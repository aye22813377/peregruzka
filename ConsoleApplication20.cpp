#include <iostream>
using namespace std;

class Point
{
private:
	int _x;
	int _y;
public:
	Point()
	{
		_x = 0;
		_y = 0;
	}
	Point(int x, int y)
	{
		_x = x;
		_y = y;
	}
	void showPoint()
	{
		cout << "X:" << _x << " Y: " << _y << endl;
	}
	Point operator+(Point p)
	{
		Point newP = { this->_x + p._x, this->_y + p._y };
		return newP;
	}
	Point operator-(Point p)
	{
		Point newP = { this->_x - p._x, this->_y - p._y };
		return newP;
	}
	Point operator*(Point p)
	{
		Point newP = { this->_x * p._x, this->_y * p._y };
		return newP;
	}
	Point operator/(Point p)
	{
		Point newP = { this->_x / p._x, this->_y / p._y };
		return newP;
	}
	Point operator+(int n)
	{
		Point newP = { this->_x + n, this->_y + n };
		return newP;
	}
	Point operator-(int n)
	{
		Point newP = { this->_x - n, this->_y - n };
		return newP;
	}
	Point operator*(int n)
	{
		Point newP = { this->_x * n, this->_y * n };
		return newP;
	}
	Point operator/(int n)
	{
		Point newP = { this->_x / n, this->_y / n };
		return newP;
	}
	int getX()
	{
		return _x;
	}
	int getY()
	{
		return _y;
	}
	void setX(int x)
	{
		_x = x;
	}
};

Point operator+(int n, Point p)
{
	return { n + p.getX(), n + p.getY() };
}

int main()
{
	Point p1 = { 6,12 };
	Point p2 = { 2,4 };
	Point p3 = p1 / p2; 
	p3.showPoint();
	Point p4 = p1 / 2;
	p4.showPoint();


}