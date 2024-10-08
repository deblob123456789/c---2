#ifndef AMOVABLE_H__
#define AMOVABLE_H__

class AMovable {
protected:
    Vector2 direction;
    float speed;

public:
    //constructor
    AMovable(float _x, float _y, float _speed);

    virtual void setDirection();
    virtual void setSpeed();
    virtual void Move();
};








#endif