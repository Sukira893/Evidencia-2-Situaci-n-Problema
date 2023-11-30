#include <iostream>
#include<Triangle.h>

using namespace std;

int main()
{
    double vertice1[2];
    double vertice2[2];
    double vertice3[2];

    cout<<"Valor de X del primer vertice: ";
    cin>>vertice1[0];
    cout<<"Valor de Y del primer vertice: ";
    cin>>vertice1[1];
    cout<<endl;

    cout<<"Valor de X del segundo vertice: ";
    cin>>vertice2[0];
    cout<<"Valor de Y del segundo vertice: ";
    cin>>vertice2[1];
    cout<<endl;

    cout<<"Valor de X del tercer vertice: ";
    cin>>vertice3[0];
    cout<<"Valor de Y del tercer vertice: ";
    cin>>vertice3[1];
    cout<<endl;

    Triangle Triangulo2;
    Triangle Triangulo1(vertice1,vertice2,vertice3);

    cout<<"Triangulo por omisión de clase"<<endl;
    cout<<"Perimetro: "<<Triangulo2.Perimeter()<<" Area: "<<Triangulo2.Area()<<endl;
    cout<<endl;

    cout<<"Triangulo definido por el usuario"<<endl;
    cout<<"Perimetro: "<<Triangulo1.Perimeter()<<" Area: "<<Triangulo1.Area()<<endl;

    return 0;
}
