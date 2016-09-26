#include "retangulo.h"
#include <iostream>

using namespace std;

/**
 * @brief Retangulo::Retangulo é o construtor da classe Retangulo
 * @param mx é a coordenada x do vértice superior esquerdo do retângulo
 * @param my é a coordenada y do vértice superior esquerdo do retângulo
 * @param mlargura é a largura do retângulo e
 * @param maltura é a altura do retângulo
 */

Retangulo::Retangulo(int mx, int my, int mlargura, int maltura){
    x = mx; y = my; largura = mlargura; altura = maltura;
    R.addVertices(x+largura,y-altura);
    R.addVertices(x+largura,y);
    R.addVertices(x,y);
    R.addVertices(x,y-altura);

    R.ImprimePoligono();
    cout << "A area do retangulo eh " << R.areaPoligono() <<endl;
    R.Move(-3,4);
    R.ImprimePoligono();
    cout << "A area do retangulo eh " << R.areaPoligono() <<endl;
    Point cm;
    cm = R.CentrodeMassa();
    R.RotacionarPoligono(cm.getX(),cm.getY(),30);
    R.ImprimePoligono();
    cout << "A area do retangulo eh " << R.areaPoligono() <<endl;

}

/**
 * @brief Retangulo::~Retangulo é o destrutor da classe Retangulo
 */

Retangulo::~Retangulo(){}





