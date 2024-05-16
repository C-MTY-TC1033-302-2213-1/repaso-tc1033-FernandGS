//
//  Punto.hpp
//  A01029264Composición
//
//  Created by Fernando Hernández Salazar on 16/05/24.
//

#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>
class Punto{
private:
    double x;
    double y;
    
public:
    //Metodos construcutores
    Punto();
    Punto(double _x, double _y);
    
    //Metodos de acceso - retorna el valor del atributo
    double getX();
    double getY();
    
    //Metodos modificadores - cambiar el valor del atributo
    void setX(double _x);
    void setY(double _y);
    
    //Otros métodos
    double calculaDistancia(Punto p2);
    std::string str();
    
};

#endif /* Punto_hpp */
