#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Exercice.h"
#include <iostream>

//Classe abstraite, can't instanciate AMovable on its own as it is missing Move's implementation
class AMovable {
protected:
    Vector2 direction;
    float speed;

public:
    //constructor
    AMovable(float _directionx, float _directiony, float speed);

    virtual Vector2 setDirection(float _directionx, float _directiony);
    virtual void setSpeed(float newSpeed);
    virtual void Move(Vector2 direction, float speed) = 0; //virtual pur
};


class Alive {
protected:
    float maxHP;
    float currentHP;

public:
    //constructor
    Alive(float maxHP, float currentHP);

    virtual void setMaxHP(float maxHP);
    virtual float getMaxHP();
    virtual void setcurrentHP(float currentHP);
    virtual float getcurrentHP();
    virtual void takeDamage(float damageAmount);
};

//interface, so can only be used to implement its functions
class IAttacker {
public:
    virtual void attack(Alive* _alive) = 0;
};


class StaticObject : public Entity {
public:
    //constructor
    StaticObject(float _x, float _y): Entity( Vector2(_x,_y)) {
        std::cout << "Static Object created at x = " << _x << " and y = " << _y << std::endl;
    }
};

#endif