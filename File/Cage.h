#pragma once

#include <string>
#include "Animal.h"
#include "Predator.h"
#include "Herbivore.h"

#include <iostream>
using namespace std;

class Cage
{
private:
    Animal* a;
public:
    Cage()
    {
        a = NULL;
    }
    void Put_animal_in_cage(Animal* _a)
    {
        a = _a;
    }
    void Tell_about_animal()
    {
        if (a == NULL)
        {
            cout << "Пустая клетка" << endl;
        }
        else
        {
            a->Tell_about_yourself();
        }
    }
};