#ifndef EXERCICE_H__
#define EXERCICE_H__

#include "Vector2.h"

class Entity {
protected:
    Vector2 position;

public:
    //constructor
    //Entity(float _x, float _y);
    Entity(Vector2 _position) : position (_position)
    {

    }

	virtual void setX(float _x)
    {
        position.setX(_x);
    }
    virtual float getX()
    {
	    return position.getX();
    }
    virtual void setY(float _y)
    {
        position.setY(_y);
    }
    virtual float getY()
    {
        return position.getY();
    }

};



#endif