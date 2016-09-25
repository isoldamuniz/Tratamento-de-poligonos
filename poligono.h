#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief A classe Poligono representa polígonos convexos formados por um conjunto de pontos bidimensionais
 */

class Poligono{
    Point vertices[100];
    int nvertices=0;
public:
    Poligono();
    ~Poligono();
    void addVertices(float _x, float _y);
    int NumeroVertices();
    double areaPoligono();
    void Move(float a, float b);
    void ImprimePoligono();
    void RotacionarPoligono(float _x, float _y, float teta);
    Point CentrodeMassa();
};

#endif // POLIGONO_H
