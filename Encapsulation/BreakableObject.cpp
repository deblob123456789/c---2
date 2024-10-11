#include "BreakableObject.h"

BreakableObject::BreakableObject(float _x, float _y, float _maxHP, float _currentHP) : Entity(Vector2(_x, _y)), Alive(maxHP, currentHP)
{
	setMaxHP(_maxHP);
	setcurrentHP(_currentHP);
    std::cout << "Breakable Object created at x = " << _x << " and y = " << _y << ", with " << _maxHP << " max HP and " << _currentHP << " current HP " << std::endl;
}

void BreakableObject::takeDamage(float damageAmount)
{
	currentHP -= damageAmount;

	if (currentHP <= 0)
	{
	std::cout << "Breakable Object just broke" << std::endl;
	}
}