#pragma once

//if already defined, skip this file
#ifndef FUNC_H__
#define FUNC_H__

//takes user input and prints an infinite array
void stringArrayfunc() {
    std::vector<std::string>* stringArray = new std::vector<std::string>();
    std::string userInput;
    while (true) {

        //asks the user for input, then saves it in the array
        std::cin >> userInput;
        stringArray->push_back(userInput);

        //prints the entire array
        for (int i = 0; i < stringArray->size(); i++) {
            std::cout << (*stringArray)[i] << std::endl;
        }
    }
}

//Can return a vector3 into string format
class cVector3 {
public:
    float x;
    float y;
    float z;

    //Default constructor
    cVector3(float x, float y, float z);

    //Tell the class these functions exist somewhere
    std::string toString();
    //float EnterValue();
};


#endif

