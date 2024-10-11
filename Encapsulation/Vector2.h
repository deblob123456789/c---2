#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2 {
protected:
    float x;
    float y;

public:
    //constructor
    Vector2(float _x, float _y);

    void setX(float _x) {
        x = _x;
    }
    float getX() {
        return x;
    }
    void setY(float _y) {
        y = _y;
    }
    float getY() {
        return y;
    }
};



#endif