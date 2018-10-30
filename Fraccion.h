//
//  Fraccion.h
//  sobre
//
//  Created by Jose Antonio on 16/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Fraccion_h
#define Fraccion_h

class Fraccion
{
    friend double operator !(Fraccion f);
public:
    // Constructores
    Fraccion();
    Fraccion(int n, int d);
    // metodos de acceso
    int getNum();
    int getDen();
    // metodos de modificacion
    void setNum(int n);
    void setDen(int d);
    // metodos
    Fraccion operator + (Fraccion f);
    Fraccion operator - (Fraccion f);
    Fraccion operator * (Fraccion f);
    bool operator >(Fraccion);
    Fraccion operator++();
    Fraccion operator--();
    Fraccion operator*();
    void muestra();
    
private:
    int num, den;
};

Fraccion::Fraccion()
{
    num = 1;
    den = 2;
}

Fraccion::Fraccion(int n, int d)
{
    num = n;
    den = d;
}

int Fraccion::getNum()
{
    return num;
}

int Fraccion::getDen()
{
    return den;
}

void Fraccion::setNum(int n)
{
    num = n;
}

void Fraccion::setDen(int d)
{
    den = d;
}

void Fraccion::muestra()
{
    cout << num << "/" << den;
}

double operator !(Fraccion f)
{
    return  (double)f.num/f.den;
}
Fraccion Fraccion:: operator + (Fraccion f)
{   Fraccion res;
    res.num = this->num * f.den + this->den * f.num;
    res.den = this->den * f.den;
    return res;
}
Fraccion Fraccion:: operator - (Fraccion f)
{   Fraccion res;
    res.num = this->num * f.den - this->den * f.num;
    res.den = this->den * f.den;
    return res;
}
Fraccion Fraccion::operator * (Fraccion f)
{   Fraccion res;
    res.num = this->num * f.num;
    res.den = this->den * f.den;
    return res;
}
bool Fraccion::operator >(Fraccion x)
{
    double a, b;
    a=this->num/this->den;
    b=x.num/x.den;
    if (a>b)
        return true;
        else
        return false;
}
Fraccion Fraccion::operator++(){
    Fraccion w;
    w.num=this->num*1+this->den*1;
    w.den=this->den*1;
    return w;
}
Fraccion Fraccion:: operator--(){
    Fraccion res;
    res.num=this->num*(-1);
    res.den=this->den;
    return res;
}
Fraccion Fraccion:: operator*(){
    Fraccion res;
    res.num=this->num*2;
    res.den=this->den;
    return res;
}



#endif /* Fraccion_h */
