#ifndef POINT_H
#define POINT_H
/**
 * @brief A classe Point representa pontos no espaço bidimensional
 */

class Point{
    float x;
    float y;
public:
    Point(float _x=0, float _y=0);
    ~Point();
    void setX (float _x);
    void setY (float _y);
    void setXY (float _x, float _y);
    float getX (void);
    float getY (void);
    float Norma();
    void Translada(float a, float b);
    void Imprime();
    Point Add(Point p1);
    Point Sub(Point p1);
};

#endif // POINT_H
