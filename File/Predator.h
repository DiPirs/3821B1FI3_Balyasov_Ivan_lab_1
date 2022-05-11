#pragma once

#include <string>
#include "Animal.h"

#include <iostream>
using namespace std;

class Predator : public Animal
{

public:
    string Type_of_animal()
    {
        return "Хищник";
    }
    string Name_of_animal()
    {
        return "";
    }
    string Voice_of_animal()
    {
        return "";
    }
};

class Lion :public Predator
{

public:
    
    string Name_of_animal()
    {
        return "Лев";
    }
    string Voice_of_animal()
    {
        return "Roar";
    }
};

class Tigre :public Predator
{

public:
    string Name_of_animal()
    {
        return "Тигр";
    }
    string Voice_of_animal()
    {
        return "Gr-r-r";
    }
};

class Wolf :public Predator
{

public:
    string Name_of_animal()
    {
        return "Волк";
    }
    string Voice_of_animal()
    {
        return "Owoo";
    }
};

class Bear :public Predator
{

public:
    string Name_of_animal()
    {
        return "Медведь";
    }
    string Voice_of_animal()
    {
        return "Rao-rao";
    }
};
