#pragma once

#include <string>

#include <iostream>
using namespace std;

class Animal
{

public:
    virtual string Type_of_animal() = 0;
    virtual string Name_of_animal() = 0;
    virtual string Voice_of_animal() = 0;

    void Tell_about_yourself()
    {
        cout << this->Type_of_animal() << endl;
        cout << this->Name_of_animal() << endl;
        cout << this->Voice_of_animal() << endl;
    }
};