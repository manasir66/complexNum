


#include <iostream>
#include <cmath>
#include "complexNo.h"

using namespace std;

double pi = 3.14285;


void complexNo::setReal(double a)
{
    real = a;
}
void complexNo::setImag(double b)
{
    imag = b;
}
double complexNo::getReal()
{
    return real;
}
double complexNo::getImag()
{
    return imag;
}
void complexNo::printComplex()
{
    cout << "Z = " << real << " + (" << imag << ")j ";
}
double complexNo::getModulus()
{
    double a;
    a = pow(real, 2) + pow(imag, 2);
    return sqrt(a);
}
double complexNo::getArgument()
{
    double a,b;
    a = (imag / real);
    b = atan(a) * (180/pi);
    return b;
}
void complexNo::getConjugate1()
{
    double a;
    a = (-1) * imag;
    cout << getReal() << " + (" << a <<")j" ;
}
complexNo complexNo::operator+(complexNo x)
{
    complexNo z;
    z.real = real + x.real;
    z.imag = imag + x.imag;
    return z;
    
}
complexNo complexNo::operator-(complexNo x)
{
    complexNo z;
    z.real = real - x.real;
    z.imag = imag - x.imag;
    return z;
}
complexNo complexNo::operator*(complexNo x)
{
    complexNo z;
    double a, b;
    a = (real * x.real) -(imag * x.imag);
    b = (real * x.imag) + (imag * x.real);
    z.real = a;
    z.imag = b;
    return z;
}
double complexNo::getReConj()
{
    return real;
}
double complexNo::getImConj()
{
    double a;
    a = (-1) * imag;
    return a;
}
void complexNo::showPolarform()
{
    cout << "Z = (" << getModulus() <<", "<< getArgument() << "°)";
}
complexNo complexNo::operator/(complexNo x)
{
    double a,b,c,d,e,f,g,h;
    complexNo z;
	a=getReal(); b=getImag();
	c=x.getReal(); d= x.getImag();
	e = ((a*c)+(b*d)) / ((c*c)+(d*d));
	f = ((b*c)-(a*d)) / ((c*c)+(d*d));
	z.setReal(e);
	z.setImag(f);
    return z;
}
void complexNo::showEularform()
{
    double a, b, c;
    a = getModulus();
    b = getArgument();
    cout <<" Z = (" <<a<<")e^(j"<<b<<"°)";
}
complexNo::complexNo()
{
    setReal(0);
    setImag(0);
}
complexNo::complexNo(double a, double b)
{
    setReal(a);
    setImag(b);
}




