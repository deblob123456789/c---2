#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include <iostream>

#include "Exercice.h"
#include "AMovable.h"

class BreakableObject : public Entity, Alive {
protected:

public:
    //constructor
    BreakableObject(float _x, float _y) : Entity(Vector2(_x, _y)), Alive( _maxHP, _currentHP) {
        Entity.setX(_x);
    	//std::cout << "Static Object created at x = " << _x << " and y = " << _y << std::endl;
    }
};

#endif


//Un set le x et y. (Prendre les valeurs en paramètre)
//Set le maximum de vie et la vie actuel. (Prendre les valeurs en paramètre)
//Afficher “Breakable Object just created at x = ici - la - position - x and y = ici - la - position - y with ici - la - maxlife life”