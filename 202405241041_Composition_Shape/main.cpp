#include <iostream>
#include <math.h>

using namespace std;

class Point
{
private:
    int _x, _y;

public:
    Point(int x, int y)
        :_x(x), _y(y) {}

    int GetX()
    {
        return _x;
    }

    int GetY()
    {
        return _y;
    }


    void Info()
    {
        cout << "x: " << _x << ", y: " << _y << endl;
    }
};

class Line
{
private:
    Point _pt1, _pt2;

public:
    Line(int pt1x, int pt1y, int pt2x, int pt2y)
        :_pt1(pt1x, pt1y), _pt2(pt2x, pt2y) {}

    Line(Point pt1, Point pt2)
        :_pt1(pt1), _pt2(pt2) {}


    float GetLength()
    {
        int xbase = _pt2.GetX() - _pt1.GetX();
        int height = _pt1.GetY() - _pt2.GetY();

        return sqrt(pow(xbase, 2) + pow(height, 2));
    }
};

class Triangle
{
private:
    Point _topPt, _lBottomPt, _rBottomPt;

public:
    Triangle(Point lBottomPt, Point topPt, Point rBottomPt)
        : _lBottomPt(lBottomPt), _topPt(topPt), _rBottomPt(rBottomPt) {}

    Triangle(int lBotttomPtX, int lBottomPtY, int topPtX, int topPtY, int rBottomPtX, int rBottomPtY)
        : _lBottomPt(lBotttomPtX, lBottomPtY), _topPt(topPtX, topPtY), _rBottomPt(rBottomPtX, rBottomPtY) {}

    float GetArea()
    {
        int xBase = _rBottomPt.GetX() - _lBottomPt.GetX();
        int height = _lBottomPt.GetY() - _topPt.GetY();

        return xBase * height / 2.0f;
    }
};

class Rectangle
{
private:
    Point _lTopPt, _rBottomPt;

public:
    Rectangle(int lTopPtX, int lTopPtY, int rBottomPtX, int rBottomPtY)
        : _lTopPt(lTopPtX, lTopPtY), _rBottomPt(rBottomPtX, rBottomPtY) {}

    Rectangle(Point lTopPt, Point rBottomPt)
        : _lTopPt(lTopPt), _rBottomPt(rBottomPt) {}

    float GetArea()
    {
        int xBase = _rBottomPt.GetX() - _lTopPt.GetX();
        int height = _rBottomPt.GetY() - _lTopPt.GetY();

        return xBase * height;
    }
};

class Circle
{
private:
    Point _centerPt;    // 중심점
    int _radius; // 반지름
    const float PI = 3.14f;

public:
    Circle(int centerPtX, int centerPtY, int radius)
        : _centerPt(centerPtX, centerPtY), _radius(radius) {}

    Circle(Point centerPt, int radius)
        : _centerPt(centerPt), _radius(radius) {}

    Circle(Point centerPt, Point edgePt)
        : _centerPt(centerPt)
    {
        Line line(centerPt, edgePt);

        _radius = line.GetLength();
    }

    Circle(int centerPtX, int centerPtY, int edgePtX, int edgePtY)
        : _centerPt(centerPtX, centerPtY)
    {
        Line line(centerPtX, centerPtY, edgePtX, edgePtY);

        _radius = line.GetLength();
    }

    float GetArea()
    {
        return PI * _radius * _radius;
    }

};


//class Rectangular
//{
//private:
//
//};

// 삼각형 클래스 (정삼각형, 직각삼각형)
// 사각형 클래스 (정사각형, 직사각형)
// 원 클래스

// 각각의 도형클래스르 만들고 면적을 출력하세요.


int main()
{
    Line line(0, 0, 4, 4);
    cout << "line length = " << line.GetLength() << endl;


    Triangle tri(0, 4, 2, 2, 4, 4);
    cout << "triangle Area = " << tri.GetArea() << endl;

    Point LeftTopPt(2, 2);
    Point rightBottomPt(4, 4);

    Rectangle rect(LeftTopPt, rightBottomPt);
    cout << "Rectangle Area = " << rect.GetArea() << endl;

    Circle circle(0, 0, 4, 4);
    cout << "Circle Area = " << circle.GetArea() << endl;

    return 0;
}