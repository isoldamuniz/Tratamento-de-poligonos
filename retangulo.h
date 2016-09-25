#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo representa retângulos como polígonos
 */

class Retangulo : public Poligono {
    Poligono R;
    int x, y, largura, altura;
public:
    Retangulo(int mx=0, int my=0, int mlargura=0, int maltura=0);
    ~Retangulo();
};

#endif // RETANGULO_H
