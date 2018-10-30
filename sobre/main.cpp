//
//  main.cpp
//  sobre
//
//  Created by Jose Antonio on 16/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Fraccion.h"

int main()
{
    
    Fraccion f1(1,3), f2(3,4), f3(1,5), f4;
    
    
    // la suma de las fracciones 1/3 y 3/4
    cout << endl;
    cout << "La suma de las fracciones 1 y 2 " << endl;
    f1.muestra();
    cout << endl;
    f2.muestra();
    cout << endl;
    f4 = f1 + f2;
    f4.muestra();
    
    // el valor en decimal de la fracciÃ³n 1/3
    cout << endl;
    cout << "El valor decimal de la fracciÃ³n 1 "<< endl;
    cout << !f1;
    
    //la multiplicacion de las fracciones f1 y f2
    cout << endl;
    cout << "La multiplicacion de las fracciones 1 y 2" << endl;
    f1.muestra();
    cout << endl;
    f2.muestra();
    cout << endl;
    f4 = f1 * f2;
    f4.muestra();
    cout << endl;
    
    //la fraccion f1 es mayor que la fraccion f2
    cout << "fraccion 1" << endl;
    f1.muestra();
    cout << endl;
    cout << "fraccion 2" << endl;
    f2.muestra();
    cout << endl;
    if (f1 > f2)
        cout << "f1 es mayor" << endl;
    else
        cout << "f2 es mayor" << endl;
    
    //suma el valor 1/1 a la fraccion
    f1.muestra();
    cout << endl;
    f4=++f1;
    f4.muestra();
    
    //cambia a negativo una fraccion
    cout << endl;
    cout << "La fraccion 1 megativa" << endl;
    f1.muestra();
    cout << endl;
    f4=--f1;
    f4.muestra();
    
    //resta de las fracciones f2 y f3
    cout << endl;
    cout << "La resta de las fracciones 2 y 3" << endl;
    f2.muestra();
    cout << endl;
    f3.muestra();
    cout << endl;
    f4=f2-f3;
    f4.muestra();
    
    //multiplicacion de una fraccion por un valor entero
    cout << endl;
    cout << "la multiplicacion de f3 * 2" << endl;
    f3.muestra();
    cout << endl;
    f4=*f3;
    f4.muestra();
    cout << endl;
    
    return 0;
}
