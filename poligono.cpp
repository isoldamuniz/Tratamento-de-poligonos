#include "poligono.h"
#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

/**
 * @brief Poligono::Poligono é o construtor default da classe Poligono
 */

Poligono::Poligono(){}

/**
 * @brief Poligono::~Poligono é o destrutor da classe Poligono
 */

Poligono::~Poligono(){}

/**
 * @brief Poligono::addVertices insere vértices no polígono obedecendo uma sequência anti-horária
 * @param _x é a coordenada x do vértice
 * @param _y é a coordenanda y do vértice
 */

void Poligono::addVertices(float _x, float _y){
    vertices[nvertices].setX(_x);
    vertices[nvertices].setY(_y);
    nvertices++;
}

/**
 * @brief Poligono::NumeroVertices retorna o número de vértices que o polígono possui
 */

int Poligono::NumeroVertices(){
    return nvertices;
}

/**
 * @brief Poligono::areaPoligono calcula e retorna a área do polígono convexo
 */

double Poligono::areaPoligono(){
    double SomaProdutos1 = 0, SomaProdutos2 = 0;
    int i;
    for(i=0;i<nvertices-1;i++){
        SomaProdutos1 = (vertices[i].getX() * vertices[i+1].getY()) + SomaProdutos1;
    }
    SomaProdutos1 = (vertices[nvertices-1].getX() * vertices[0].getY()) + SomaProdutos1;
    for(i=0;i<nvertices-1;i++){
        SomaProdutos2 = (vertices[i].getY() * vertices[i+1].getX()) + SomaProdutos2;
    }
    SomaProdutos2 = (vertices[nvertices-1].getY() * vertices[0].getX()) + SomaProdutos2;
    return (fabs(SomaProdutos1 - SomaProdutos2)/2);
}

/**
 * @brief Poligono::Move translada o polígono para um ponto fornecido
 * @param a é a coordenada x do ponto
 * @param b é a coordenada y do ponto
 */

void Poligono::Move(float a, float b){
    int i;
    for(i=0;i<nvertices;i++){
        vertices[i].setX(vertices[i].getX()+a);
        vertices[i].setY(vertices[i].getY()+b);
    }
}

/**
 * @brief Poligono::RotacionarPoligono rotaciona o polígono em torno de um ponto fornecido, onde
 * @param _x é a coordenada x do ponto e
 * @param _y é a coordenada y do ponto e
 * @param teta é o angulo o qual se deseja rotacionar o polígono
 */

void Poligono::RotacionarPoligono(float _x, float _y, float teta){
    int i;
    for(i=0;i<nvertices;i++){
        vertices[i].Translada(-_x,-_y);
    }
    for(i=0;i<nvertices;i++){
                vertices[i].setX(vertices[i].getX() * cos((teta*PI)/180) - vertices[i].getY() * sin((teta*PI)/180));
                vertices[i].setY(vertices[i].getY() * cos((teta*PI)/180) + vertices[i].getX() * sin((teta*PI)/180));
    }
    for(i=0;i<nvertices;i++){
        vertices[i].Translada(_x,_y);
    }
}

/**
 * @brief Poligono::ImprimePoligono imprime o polígono na forma (x0,y0)→(x1,y1)→(x2,y2)..(xN−1,yN−1)→(x0,y0).
 */

void Poligono::ImprimePoligono(){
    int i;
    for(i=0;i<nvertices;i++){
        cout << "(" << vertices[i].getX() << "," << vertices[i].getY() << ") -> ";
    }
    cout << "(" << vertices[0].getX() << "," << vertices[0].getY() << ")." <<endl;
}

/**
 * @brief Poligono::CentrodeMassa calcula e retorna o centro de massa do polígono na forma de um ponto
 */

Point Poligono::CentrodeMassa(){
    float cm_x, cm_y;
    for(int i=0;i<nvertices;i++){
       cm_x = vertices[i].getX() + cm_x;
       cm_y = vertices[i].getY() + cm_y;
    }
    cm_x = cm_x/nvertices;
    cm_y = cm_y/nvertices;

    return Point (cm_x,cm_y);
}
