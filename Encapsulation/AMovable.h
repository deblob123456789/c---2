#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Exercice.h"

//Classe abstraite, can't instanciate AMovable on its own as it is missing Move's implementation
class AMovable {
protected:
    Vector2 direction;
    float speed;

public:
    //constructor
    AMovable(float _x, float _y, float _speed);

    virtual void setDirection(Vector2 newDirection);
    virtual void setSpeed(float newSpeed);
    virtual void Move(Vector2 direction, float speed) = 0; //virtual pur
};


class Alive {
protected:
    float maxHP;
    float currentHP;

public:
    //constructor
    Alive(float _maxHP, float _currentHP);

    virtual void getMaxHP();
    virtual void getcurrentHP();
    virtual void takeDamage(float damageAmount);
};

//interface, so can only be used to implement its functions
class IAttacker {
public:
    virtual void attack(Alive* _alive) = 0;
};


class StaticObject : public Entity {
protected:

public:
    //constructor
    StaticObject(float _x, float _y): Entity( Vector2(_x,_y)) {
        std::cout << "Static Object created at x = " << _x << " and y = " << _y << std::endl;
    }
};

#endif