#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Point::Point é a função construtora dos pontos
 * @param _x corresponde a coordenada x do ponto e
 * o @param _y corresponde a coordenada y do ponto
 */

Point::Point(float _x, float _y){
    x = _x;
    y = _y;
}

/**
 * @brief Point::~Point é a função destrutora dos pontos
 */

Point::~Point(){}

/**
 * @brief Point::setX define valores para a coordenada x do ponto
 * @param _x é a coordenada x do ponto
 */

void Point::setX(float _x){
    x = _x;
}

/**
 * @brief Point::setY define valores para a coordenada y do ponto
 */

void Point::setY(float _y){
    y = _y;
}

/**
 * @brief Point::setXY define valores para as coordenadas x e y do ponto
 */

void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
}

/**
 * @brief Point::getX recupera o valor da coordenada x do ponto
 */

float Point::getX(void){
    return x;
}

/**
 * @brief Point::getY recupera o valor da coordenada y do ponto
 */

float Point::getY(void){
    return y;
}

/**
 * @brief Point::Add adiciona coordenadas de um ponto fornecido (p1) a um ponto existente
 * de modo que retorna um novo ponto (x+x1,y+y1)
 */

Point Point::Add(Point p1){
    Point p2;
    p2.x = x+p1.x;
    p2.y = y+p1.y;
    return p2;
}

/**
 * @brief Point::Sub subtrai coordenadas de um ponto fornecido (p1) de um ponto existente
 * de modo que retorna um novo ponto (x-x1,y-y1)
 */

Point Point::Sub(Point p1){
    Point p2;
    p2.x = x-p1.x;
    p2.y = y-p1.y;
    return p2;
}

/**
 * @brief Point::Norma retorna a distância do ponto em relação a origem do plano cartesiano (0,0)
 */

float Point::Norma(){
    return (sqrt(x*x + y*y));
}

/**
 * @brief Point::Translada translada o ponto para x + a e y + b, de modo que
 * @param a é o valor o qual se deseja transladar a coordenada x do ponto
 * @param b é o valor o qual se deseja transladar a coordenada y do ponto
 */

void Point::Translada(float a, float b){
    setX(x+a);
    setY(y+b);
}

/**
 * @brief Point::Imprime imprime o ponto na forma (x,y)
 */

void Point::Imprime(){
    cout <<"(" << x << "," << y <<")\n";
}
