

#ifndef complexNo_h
#define complexNo_h

#include <iostream>
#include <cmath>

using namespace std;
class complexNo
{
    double real, imag;
public:
    void setReal(double );
    void setImag(double );
  
    double getReal();
    double getImag();
    
    double getReConj();
    double getImConj();
    void printComplex();
    double getModulus();
    double getArgument();
    void getConjugate1();
    complexNo operator+(complexNo);
    complexNo operator-(complexNo);
    complexNo operator*(complexNo);
    complexNo operator/(complexNo);
    complexNo add(complexNo);
    void showPolarform();
    void showEularform();
    complexNo();
    complexNo(double, double);
};


#endif /* complexNo_h */
