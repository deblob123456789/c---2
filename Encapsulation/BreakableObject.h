#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "AMovable.h"

class BreakableObject : public Entity, public Alive {
public:
    //constructor
    BreakableObject(float _x, float _y, float maxHP, float currentHP);

    void takeDamage(float damageAmount) override;
};

#endif