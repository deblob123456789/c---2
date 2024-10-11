#include "AMovable.h"

AMovable::AMovable(float _directionx, float _directiony, float _speed) : direction(_directionx, _directiony), speed(_speed)
{
	//direction = setDirection(_directionx, _directiony);
}

/*Vector2 AMovable::setDirection(float _directionx, float _directiony) : direction(_directionx, _directiony)
{
	Vector2 direction(_directionx, _directiony);

	return direction;
}*/

Alive::Alive(float _maxHP, float _currentHP) : maxHP(_maxHP), currentHP(_currentHP)
{
	setMaxHP(_maxHP);
	setcurrentHP(_currentHP);
}

void Alive::setMaxHP(float _maxHP)
{
	maxHP = _maxHP;
}

float Alive::getMaxHP()
{
	return maxHP;
}

void Alive::setcurrentHP(float _currentHP)
{
	currentHP = _currentHP;
}

float Alive::getcurrentHP()
{
	return currentHP;
}

void Alive::takeDamage(float damageAmount)
{
	currentHP =- damageAmount;
}


void AMovable::setSpeed(float _newSpeed)
{
	speed = _newSpeed;
}