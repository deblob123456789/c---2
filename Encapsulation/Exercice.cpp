#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "Exercice.h"
#include "AMovable.h"
#include "AMovable.cpp"

Entity::Entity(float _x, float _y) : position(_x, _y)
{

}

int main() {

    Vector2 v(10, 30);
    Entity e(0, 0);

    std::cout << "test" << std::endl;

    return 0;
}