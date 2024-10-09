// Encapsulation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <cmath>
#include "encapsulation.h"

//using namespace std;

//Default values after object creation
cVector3::cVector3(float _x, float _y, float _z):
    x(_x), y(_y), z(_z){};


//Experimental function (incomplete, can delete)
/*float cVector3::EnterValue() {
    std::cout << "Enter value" << std::endl;
};*/


std::string cVector3::toString() {
    std::stringstream sstreamBuffer;

    std::cout << "Enter value" << std::endl;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    sstreamBuffer << "Point : x:" << x << ", y:" << y << ", z:" << z;

    return sstreamBuffer.str();
 };

// instance constructor
Integer::Integer() : int1(0)
{

}

// instance constructor with parameter
Integer::Integer(int _int1) : int1(_int1)
{

}

Integer Integer::pow(const Integer& int_exposant)
{
    Integer i(std::pow(this->int1, int_exposant.int1));
    return i;
}

//define the operator "+"
Integer Integer::operator+(const Integer& _integer2) {
    Integer i(this->int1 + _integer2.int1);
    return i;
}

Integer Integer::operator+=(const Integer& _integer2) {
    Integer i(this->int1 += _integer2.int1);
    return i;
}

Integer Integer::operator-(const Integer& _integer2) {
    Integer i(this->int1 - _integer2.int1);
    return i;
}


//to string
std::string Integer::toString() {
    std::stringstream sstreamBuffer;
    sstreamBuffer << int1;
    return sstreamBuffer.str();
};


//int main() {
//    //stringArrayfunc();
//
//    //cVector3 V3(0.f, 0.f, 0.f);
//    //std::cout << V3.toString() << std::endl;
//
//    Integer int1 = 1;
//    Integer int2 = 2;
//    Integer int3 = 3;
//
//    int3 += int1 + int2;
//    //int3 = int1 + int2;
//    Integer int4 = int2.pow(int3); //=64
//
//    std::cout << int4.toString() << std::endl;
//
//    std::cout << "code is running yay" << std::endl;
//
//    return 0;
//}



/*
    std::string userInput;
    std::cout << "type text\n" << std::endl;
    std::cin >> userInput;
    std::cout << userInput + "was input" << std::endl;
*/










// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
