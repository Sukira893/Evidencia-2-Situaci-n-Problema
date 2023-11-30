#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
    public:
        Triangle(double punto1[2], double punto2[2], double punto3[2]);
        Triangle();

        ~Triangle();

        double Perimeter();
        double Area();

    private:
       double vertex1[2];
       double vertex2[2];
       double vertex3[2];
       double a;
       double b;
       double c;

};

#endif // TRIANGLE_H
