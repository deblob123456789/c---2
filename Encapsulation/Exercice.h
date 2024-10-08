#ifndef EXERCICE_H__
#define EXERCICE_H__

class Vector2 {
protected:
    float x;
	float y;

public:
    //constructor
    Vector2(float _x, float _y) : x(_x), y(_y)
    {
	    
    }

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

class Entity {
protected:
    Vector2 position;

public:
    //constructor
    Entity(float _x, float _y);

	/*virtual void setX(float _x);
    virtual float getX();
    virtual void setY(float _y);
    virtual float getY();*/
};








#endif