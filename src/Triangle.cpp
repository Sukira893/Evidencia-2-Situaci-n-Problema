#include "Triangle.h"
#include<cmath>

Triangle::Triangle(double punto1[2], double punto2[2], double punto3[2])
{
    this->vertex1[0] = punto1[0];
    this->vertex1[1] = punto1[1];

    this->vertex2[0] = punto2[0];
    this->vertex2[1] = punto2[1];

    this->vertex3[0] = punto3[0];
    this->vertex3[1] = punto3[1];

    Triangle::a = sqrt(pow(Triangle::vertex1[0]-Triangle::vertex2[0],2)+pow(Triangle::vertex1[1]-Triangle::vertex2[1],2));
    Triangle::b = sqrt(pow(Triangle::vertex1[0]-Triangle::vertex3[0],2)+pow(Triangle::vertex1[1]-Triangle::vertex3[1],2));
    Triangle::c = sqrt(pow(Triangle::vertex2[0]-Triangle::vertex3[0],2)+pow(Triangle::vertex2[1]-Triangle::vertex3[1],2));
}
Triangle::Triangle()
{
    Triangle::vertex1[0] = 0;
    Triangle::vertex1[1] = 0;

    Triangle::vertex2[0] = 50;
    Triangle::vertex2[1] = 30;

    Triangle::vertex3[0] = 25;
    Triangle::vertex3[1] = 10;

    Triangle::a = sqrt(pow(Triangle::vertex1[0]-Triangle::vertex2[0],2)+pow(Triangle::vertex1[1]-Triangle::vertex2[1],2));
    Triangle::b = sqrt(pow(Triangle::vertex1[0]-Triangle::vertex3[0],2)+pow(Triangle::vertex1[1]-Triangle::vertex3[1],2));
    Triangle::c = sqrt(pow(Triangle::vertex2[0]-Triangle::vertex3[0],2)+pow(Triangle::vertex2[1]-Triangle::vertex3[1],2));
}
Triangle::~Triangle()
{
}

double Triangle::Perimeter()
{
   return Triangle::a+Triangle::b+Triangle::c;

}
double Triangle::Area()
{
    double s = (Triangle::a + Triangle::b + Triangle::c)/2;
    return sqrt(s*(s-Triangle::a)*(s-Triangle::b)*(s-Triangle::c));

}
