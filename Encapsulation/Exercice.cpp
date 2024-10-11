#include "Exercice.h"
#include "BreakableObject.h"
#include "Mob.h"

int main() {

    BreakableObject Object(6,5,5,3);
    Object.takeDamage(2);

    //Mob Slime(6, 5, 5, 3, 1, 2, 3);
    //std::cout << Object.getcurrentHP() << std::endl;

    return 0;
}