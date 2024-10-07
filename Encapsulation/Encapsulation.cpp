// Encapsulation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "encapsulation.h"

//using namespace std;

std::string cVector3::toString() {
    std::stringstream sstreamBuffer;

    std::cout << "Enter value" << std::endl;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    sstreamBuffer << "Point:" << x << "," << y << "," << z;

    std::string result = sstreamBuffer.str();

    return result;
 };

int main() {
    //stringArrayfunc();

    cVector3 V3;
    std::cout << V3.toString() << std::endl;

    return 0;
}

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
